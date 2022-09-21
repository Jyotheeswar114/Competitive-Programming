for _ in range(int(input())):
    s = input()
    l = [[s[0],0,0]]
    ans = []
    length = len(s)
    i = 1
    while(i < len(s)):
        while(i< len(s) and s[i] == s[i-1]):
            i += 1
        l[-1][2] = i-1
        if(i < len(s)):
            l.append([s[i], i, i])
            i += 1
    for i in range(0,len(l)-3+1):
        j = l[i:i+3]
        if(['1', '2', '3'] == sorted([j[0][0],j[1][0], j[2][0]])):
            ans.append(j[2][1] - j[0][2] + 1 )
    if(len(ans) == 0):
        print(0)
    else:
        print(min(ans))
