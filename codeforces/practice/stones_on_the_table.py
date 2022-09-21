n=int(input())
s=input()
last=s[0]
count=0
ans=0
for i in s[1:]:
    if(i==last):
        count+=1
    else:
        ans+=count
        count=0
        last=i
print(ans+count)
