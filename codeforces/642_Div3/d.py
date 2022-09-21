from math import *
for _ in range(int(input())):
    n = int(input())
    k = ceil(n/2)
    a = []
    a.append(k)
    l = [k]
    i = 1
    m = 4
    d = [x for x in range(0,n+1)
    if(n%2 ==0):
        while(len(l) > 0 and i < n):
            print("a  ",a)
            t = l
            l = []
            for i in t:
                v1 = i-ceil(n/m)
                v2 = i+ceil(n/m)
                if(1<=v2 and v2<=n and not(v2 in a)):
                    l.append(i+ceil(n/m))
                    a.append(i+ceil(n/m))
                    i+=1
                if(1<=v1 and v1<=n and not(v1 in a))
                    a.append(i-ceil(n/m))
                    l.append(i-ceil(n/m))
                    i += 1
            l.sort()
            print(l)
            m = m*2
    else:
        t = 1
        for i in range(2,n+1):
            if(i%2==0):
                a[t] = i
            else:
                a[k+t] = i
                t+=1
    for i in a:
        print(d[i],end=" ")
    print()
                
