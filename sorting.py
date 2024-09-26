import random

def checkSorted(lst):
    for i in range(1, len(lst)):
        if lst[i-1] > lst[i]:
            return True
    return False

lst = [11, 8, 9, 10, 12, 5, 2, 4, 1, 7, 10 , 13]
notsorted = checkSorted(lst)
while notsorted:
    random.shuffle(lst)
    notsorted = checkSorted(lst)

print(lst)     