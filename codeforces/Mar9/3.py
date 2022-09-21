for _ in range(int(input())):
    n=list(map(int,input().split()))
    l=list(map(int,input().split()))
    k=n[1]
    if(k==1):
        print("YES")
        continue
    flag=1
    flag_no=0
    one =0
    p=0
    while(flag):
        print("Pora")
        one=0
        for i in range(n[0]):
            mod=l[i]%k
            if(mod>1):
                flag_no=1
                flag=0
                break
            elif(mod==1):
                one+=1
                if(one>1):
                    flag_no=1
                    flag=0
                    break
            l[i]=l[i]/k
        f=0
        for i in range(n[0]):
            if(l[i]==0):
                f+=1
        if(f==n):
            flag=0
    if(flag_no):
        print("NO")
    else:
        print("YES")
