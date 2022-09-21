l=[4,7,47,74,447,474,477,747,774]
n=int(input())
flag=0
for i in l:
    if(n%i==0):
        flag=1
        break
if(flag):
    print("YES")
else:
    print("NO")
