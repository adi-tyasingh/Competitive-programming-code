import random
input = open("input.txt", 'w')

input.write(str(9000) + '\n')
for i in range(1000, 10000):
    input.write(str(len(bin(i).replace('0b', ''))))
    input.write('\n')
    input.write(bin(i).replace('0b', '')+'\n')