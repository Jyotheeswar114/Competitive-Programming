for _ in range(int(input())):
    n,k,l = map(int, input().split())
    l = [0]+list(map(int, input().split()))
    p = [x for x in range(k)]+[x for x in range(k,0,-1)]
    flag = 1
    i = 0
    t = 0
    inc = True
    while(i < n):
        if(inc):
            if(l[i]<l[i+1]):
                if(l[i]+k <= l):
                    t = 0
                    in = True
                else:

            else:

        else:

        i += 1
