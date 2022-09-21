for _ in range(int(input())):
    s = input()
    i = 0
    while(i<len(s) and s[0] == s[i]):
        i += 1
    j = i+1
    c = 0
    flag = 0
    while(j<len(s) and s[j] == s[i]):
        j+=1
    while(j<len(s)):
        if(s[0] == s[j]):
            c += 1
        if(s[j] == s[i]):
            flag = 1
        j += 1
    ones = 0
    zeros = 0
    for d in s:
        if(d == '1'):
            ones += 1
        else:
            zeros += 1
    if(flag):
        print(min(c,len(s)-i-c, ones, zeros))
    else:
        print(min(i,c,len(s)-i-c, ones , zeros))
