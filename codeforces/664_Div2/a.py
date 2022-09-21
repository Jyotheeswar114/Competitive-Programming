def fun(l):
    c = 0
    for i in l:
        if(i%2 == 0):
            c+=1
    return c
for _ in range(int(input())):
    l = list(map(int, input().split()))
    if(fun(l) > 2):
        print("Yes")
    else:
        if(l[0] > 0 and l[1] > 0 and l[2] > 0):
            l[0] -= 1
            l[1] -= 1
            l[2] -= 1
            l[3] += 3
            if(fun(l) > 2):
                print("Yes")
            else:
                print("No")
        else:
            print("No")
