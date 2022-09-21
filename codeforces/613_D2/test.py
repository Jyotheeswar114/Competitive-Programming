n=int(input())
for i in range(1,n+1):
    print(i,end="   ")
    sum=0
    for j in range(1,n+1):
        sum+=(i^j)
        print(i^j,end=" ")
    print("   ",sum)
