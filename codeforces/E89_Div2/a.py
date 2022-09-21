for _ in range(int(input())):
    a,b = map(int, input().split())
    if(a<b):
        a,b=b,a
    if(a == b):
        print((a//3)*2)
    elif(a>= 2*b):
        print(b)
    else:
        print(a-b+2*((a-2*(a-b))//3))
