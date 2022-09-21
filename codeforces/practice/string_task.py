s=input().lower()
v=('a', 'e', 'i', 'o', 'u','y')
for i in s:
    if i not in v:
        print(".",i,sep="",end="")
print()
