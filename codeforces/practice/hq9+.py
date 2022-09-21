l=('Q', 'H', '9')
s=input()
flag=0
for i in s:
    if i in l:
        flag=1
        break
if(flag):
    print("YES")
else:
    print("NO")
