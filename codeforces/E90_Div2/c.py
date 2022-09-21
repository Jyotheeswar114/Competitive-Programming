for _ in range(int(input())):
    s = " " + input()
    c = 0
    res = 0
    l = -1
    for i in range(1,len(s)):
        if(s[i] == "+"):
            c += 1
        else:
            c-=1
        if(c == l):
            res += i
            l -= 1
    print(res + len(s)-1)
            
