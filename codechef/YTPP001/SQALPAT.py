t_e = 1
t_o = 10
n = int(input())
for i in range(n):
    if i % 2 == 0:
        print(*list(range(t_e, t_e + 5)))
        t_e += 10
    else:
        print(*list(range(t_o, t_o - 5, -1)))
        t_o += 10
