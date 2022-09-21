for _ in range(int(input())):
    n = int(input())
    odd = []
    even = []
    l = [0]+list(map(int,input().split()))
    for i in range(1,2*n+1):
        if(l[i]%2 == 0):
            even.append(i)
        else:
            odd.append(i)
    if(len(odd)%2 == 1):
        odd.pop()
        even.pop()
    else:
        if(len(odd) > 1):
            odd.pop()
            odd.pop()
        else:
            even.pop()
            even.pop()
#    print(odd,even)
    for i in range(0,len(odd),2):
        print(odd[i],odd[i+1])
    for i in range(0,len(even),2):
        print(even[i],even[i+1])
