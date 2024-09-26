input = open("prob-2.txt","r")
output = open("mod.txt","w")

lines = input.readlines()

for line in lines:
    if '''"''' in line:
        ml = ""
        for char in line:
            if char != '''"''':
                ml += char 
            else:
                ml += '''\"''' 
        line = ml               
    line = line.strip()
    output.write(f'''"{line}",\n ''')
