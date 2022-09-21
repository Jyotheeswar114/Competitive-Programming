for _ in range(int(input())):
    n,x = map(int, input().split())
    a = list(map(int, input().split()))
    odds = 0
    evens = 0
    for i in a:
        if(i%2 == 0):
            evens+=1
        else:
            odds+=1
    if(x%2 and (x<n and odds) or (x==n and odds%2)):
            print("Yes")
    elif(x%2==0 and (x<n and (evens and odds)) or (x==n and odds%2)):
            print("Yes")
    else:
        print("No")
