n = int(input())
flag = 1
for i in range(2, int(n**0.5) + 2):
    if n % i == 0:
        flag = 0
        break
print(flag)
