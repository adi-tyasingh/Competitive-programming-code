n = input()
n = int(n)
answer = ""
for i in range(2, n):
    if n % i == 0:
        answer = "NOT PRIME"
if answer == "":
    answer = "PRIME"

print(answer)
