def fun(s,n,l,c):
    if(n == 1):
        if(s[0] == c):
            return l
        return l+1
    return min(fun(s[n//2:],n//2,l+n//2-s[:n//2].count(c),chr(ord(c)+1)),
            fun(s[:n//2],n//2,l+n//2-s[n//2:].count(c),chr(ord(c)+1)))
for _ in range(int(input())):
    n = int(input())
    s = input()
    print(fun(s,n,0,"a"))
