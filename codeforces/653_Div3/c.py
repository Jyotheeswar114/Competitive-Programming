for _ in range(int(input())):
    n = int(input())
    s = input()
    l = []
    c = 0
    for i in s:
        if(i == '('):
            l.append(i)
        else:
            if(len(l)):
                l.pop()
            else:
                c += 1
    print(c)


