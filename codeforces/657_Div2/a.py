for _ in range(int(input())):
    n = int(input())
    s = input()
    t = "abacaba"
    c = 0
    for i in range(n-6):
        if(t == s[i:i+7]):
            c += 1
            if(c == 2):
                break
#    print(c)
    if(c > 1):
        print("NO")
    elif(c == 1):
        print("YES")
        for i in range(n):
            if(s[i] == "?"):
                print("d",end = "")
            else:
                print(s[i],end = "")
        print()
    else:
        main = 0
        for i in range(n-6):
            flag = 1
            for j in range(i,i+7):
                if(s[j] != t[j-i] and s[j] != "?"):
#                    print(s[j],t[j-i],j,i)
                    flag = 0
                    break
            if(flag == 1):
                try:
                    if(s[i+4:i+11] != t):
                        s = s[:i]+t+s[i+7:]
                        main = 1
                        break
                except:
                    main = 1
                    s = s[:i]+t+s[i+7:]
                    break
        if(main == 1):
            print("YES")
            for i in range(n):
                if(s[i] == "?"):
                    print("d",end = "")
                else:
                    print(s[i],end = "")
            print()
        else:
            print("NO")

