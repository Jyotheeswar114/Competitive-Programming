c=0
for _ in range(int(input())):
        if(sum(list(map(int,input().split())))>1):
            c+=1
print(c)
