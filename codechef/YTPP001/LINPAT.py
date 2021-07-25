n = int(input())
t1 = 10
t2 = 2
for i in range(n):
    if i % 2 == 0:
        print(t1, end=" ")
        t1 += 10
    else:
        print(t2, end=" ")
        t2 += 2
