f = open("language.txt", 'r')
productions = f.readlines()
mp = {}
res = {}

for production in productions:
    lhs, rhs = production.split()
    lhs = lhs.strip()
    rhs = rhs.strip()
    if lhs not in mp:
        mp[lhs] = rhs.split('|')
    else:
        mp[lhs] = mp[lhs] + rhs.split()

def first(lhs):
    lst = set()
    for prod in mp[lhs]:
        for chr in prod:
            tmp = set()
            if('a'<=chr<='z' or chr=='&'):
                tmp.add(prod[0])
            elif('A'<=chr<='Z'):
                tmp = tmp.union(first(chr))
            lst = lst.union(tmp)
            if '&' not in tmp:
                break
            
    return lst 

for key in mp:
    res[key] = first(key)
print(res)