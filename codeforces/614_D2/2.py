import math
s=int(input())
ans=0.0
while(s>0):
    if(s==1):
        ans+=1
        break
    t=s//2
    ans=ans+(t/s)
    s-=t
print(ans)
