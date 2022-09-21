for _ in range(int(input())):
    n,k=map(int,input().split())
    if(n**0.5<k):
        print("NO")
    elif(((n&1 and k&1) or (not(n&1) and not(k&1)))):
        print("YES")
    else:
        print("NO")
