for _ in range(int(input())):
    n,a,b = map(int, input().split())
    s = ""
    for i in range(0,b):
        s+=chr(ord('a')+i)
    print((n//b)*s,end="")
    t = n%b;
    print(s[:t])
