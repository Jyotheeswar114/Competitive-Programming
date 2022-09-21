for _ in range(int(input())):
    l = []
    for i in range(2):
        l.append(list(map(int, input().split())))
    i = 0
    while(i < len(l)):
        print(i)
        if(l[i][0] == l[i][1]):
            del l[i]
        else:
            i+=1
    print(*l)
