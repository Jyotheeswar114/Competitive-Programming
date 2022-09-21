for _ in range(int(input())):
    a,b,c,d=map(int, input().split())
    x,y,x1,y1,x2,y2=map(int, input().split())
    h=abs(a-b)
    v=abs(c-d)
    if((a!=0 and x==x1 and x==x2)
            or (b!=0 and x==x2 and x==x1)
            or (c!=0 and y==y1 and y==y2)
            or (d!=0 and y==y2 and y==y1)):
        print("No")
    else:
        if(a>b):
            x-=h
        else:
             x+=h
        if(c>d):
             y-=v
        else:
            y+=v
        if(x>=x1 and x<=x2 and y>=y1 and y<=y2):
            print("Yes")
        else:
            print("No")
