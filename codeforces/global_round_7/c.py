from math import ceil
a=list(map(int, input().split()))
#b=list(map(int, input().split()))
n=a[0]
k=a[1]
mod=998244353
print(int(k*(n-((k-1)/2))),end=" ");
c=ceil(n/k)
fact=1
for i in range(1,c+1):
    v=i%mod
    fact=(fact*v)%mod
print(fact)
