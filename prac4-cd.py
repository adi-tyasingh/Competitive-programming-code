from collections import defaultdict

def read_grammar_from_file(filename):
    grammar = defaultdict(list)
    with open(filename, 'r') as file:
        for line in file:
            line = line.strip()
            if line and not line.startswith('#'):  # Ignore empty lines and comments
                non_terminal, productions = line.split('->')
                non_terminal = non_terminal.strip()
                productions = productions.strip().split('|')
                grammar[non_terminal] = [prod.strip() for prod in productions]
    return grammar

def read_grammar_from_console():
    grammar = defaultdict(list)
    print("Enter grammar rules (format: A -> B | C | d). Type 'done' to finish.")
    while True:
        line = input().strip()
        if line.lower() == 'done':
            break
        if line:
            non_terminal, productions = line.split('->')
            non_terminal = non_terminal.strip()
            productions = productions.strip().split('|')
            grammar[non_terminal] = [prod.strip() for prod in productions]
    return grammar

def compute_first_sets(grammar):
    first_sets = defaultdict(set)

    def compute_first(symbol):
        if symbol in first_sets:  # If already computed, return
            return first_sets[symbol]
        if symbol.islower():  # Terminal symbol
            first_sets[symbol].add(symbol)
            return first_sets[symbol]
        # Non-terminal symbol
        first_set = set()
        for production in grammar[symbol]:
            if production == '':  # Empty string case
                first_set.add('')
            else:
                for char in production:
                    char_first = compute_first(char)
                    first_set.update(char_first - {''})
                    if '' not in char_first:
                        break
                else:
                    first_set.add('')
        first_sets[symbol] = first_set
        return first_set

    for non_terminal in grammar:
        compute_first(non_terminal)

    return first_sets

def compute_follow_sets(grammar, first_sets):
    follow_sets = defaultdict(set)
    follow_sets[next(iter(grammar))].add('$')  # Assuming the first non-terminal is the start symbol

    def compute_follow(symbol):
        if symbol in follow_sets:  # If already computed, return
            return follow_sets[symbol]
        
        follow_set = set()
        for nt, productions in grammar.items():
            for production in productions:
                if symbol in production:
                    index = production.index(symbol)
                    if index + 1 < len(production):
                        next_symbol = production[index + 1]
                        follow_set.update(first_sets[next_symbol] - {''})
                        if '' in first_sets[next_symbol]:
                            follow_set.update(compute_follow(nt))
                    else:
                        if nt != symbol:
                            follow_set.update(compute_follow(nt))
        follow_sets[symbol] = follow_set
        return follow_set

    for non_terminal in grammar:
        compute_follow(non_terminal)

    return follow_sets

def construct_parsing_table(grammar, first_sets, follow_sets):
    parsing_table = defaultdict(lambda: defaultdict(list))
    production_number = defaultdict(lambda: defaultdict(int))
    terminals = {symbol for production in grammar.values() for prod in production for symbol in prod if symbol.islower()}
    terminals.add('$')  # End-of-input marker
    
    production_counter = defaultdict(int)

    for non_terminal, productions in grammar.items():
        for idx, production in enumerate(productions):
            prod_num = idx + 1
            production_number[non_terminal][prod_num] = production
            if production == '':  # Handle ε-production
                for follow_symbol in follow_sets[non_terminal]:
                    parsing_table[non_terminal][follow_symbol].append(prod_num)
            else:
                first_symbol = production[0]
                if first_symbol.islower():  # Terminal symbol
                    parsing_table[non_terminal][first_symbol].append(prod_num)
                else:  # Non-terminal symbol
                    for symbol in first_sets[first_symbol]:
                        if symbol != '':
                            parsing_table[non_terminal][symbol].append(prod_num)
                    if '' in first_sets[first_symbol]:  # Handle ε in First set
                        for follow_symbol in follow_sets[non_terminal]:
                            parsing_table[non_terminal][follow_symbol].append(prod_num)
    
    return parsing_table, production_number

def print_parsing_table(parsing_table, production_number):
    non_terminals = sorted(set(row for row in parsing_table.keys()))
    terminals = sorted(set(col for row in parsing_table.values() for col in row.keys()))
    
    print(f"{'Non-Terminal':<15}", end="")
    for terminal in terminals:
        print(f"{terminal:<15}", end="")
    print()
    
    for nt in non_terminals:
        print(f"{nt:<15}", end="")
        for terminal in terminals:
            entries = parsing_table[nt].get(terminal, [])
            print(f"{', '.join(map(str, entries)):<15}", end="")
        print()

    print("\nProduction Rules:")
    for nt, prods in production_number.items():
        print(f"{nt}:")
        for num, prod in prods.items():
            print(f"  {num}: {prod}")

def main():
    print("Choose input method: 1. File  2. Console")
    choice = input().strip()
    
    if choice == '1':
        filename = input("Enter the filename: ").strip()
        grammar = read_grammar_from_file(filename)
    elif choice == '2':
        grammar = read_grammar_from_console()
    else:
        print("Invalid choice.")
        return

    first_sets = compute_first_sets(grammar)
    follow_sets = compute_follow_sets(grammar, first_sets)
    parsing_table, production_number = construct_parsing_table(grammar, first_sets, follow_sets)

    print("\nFIRST Sets for Non-Terminals:")
    for non_terminal in grammar:
        if non_terminal.isupper():  # Check if it's a non-terminal (assuming non-terminals are uppercase)
            print(f"FIRST({non_terminal}) = {first_sets[non_terminal]}")

    print("\nFOLLOW Sets for Non-Terminals:")
    for non_terminal in grammar:
        if non_terminal.isupper():  # Check if it's a non-terminal (assuming non-terminals are uppercase)
            print(f"FOLLOW({non_terminal}) = {follow_sets[non_terminal]}")

    print("\nParsing Table:")
    print_parsing_table(parsing_table, production_number)

if __name__ == "__main__":
    main()
