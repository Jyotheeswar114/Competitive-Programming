k = int(input())
t = "codeforces"
if(k == 1):
    print(t)
else:
    for i in range(2,41):
        if(i**10 >= k):
            x = i
            break
    for i in range(1,11):
        if(((x**i) * ((x-1)**(10-i))) >=k):
            y = i
            break
    for i in range(y):
        print(x*t[i],end="")
    for i in range(y,10):
        print((x-1)*t[i],end="")
    print()
