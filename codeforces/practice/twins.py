n=int(input())
l=list(map(int, input().split()))
l.sort(reverse=True)
total=sum(l)
i=0
s=l[0]
#print(l)
#print(s)
while(s<=(total-s)):
    i+=1
    s+=l[i]
    #print(s)
print(i+1)
