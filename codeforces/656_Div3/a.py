for _ in range(int(input())):
    x,y,z = map(int, input().split())
    flag = 1
    if(x == y and y==z):
        a,b,c = x,x,x
    elif(x==y and x > z):
        a,b,c = z,z,x
    elif(y==z and y > x):
        a,b,c = x,x,z
    elif(x == z and x > y):
        a,b,c = y,y,x
    else:
        flag = 0
    if(flag == 1):
        print("YES")
        print(a,b,c)
    else:
        print("NO")
