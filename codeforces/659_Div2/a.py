def fun(c):
    if(c == 'z'):
        return 'a'
    else:
        return chr(ord(c)+1)
for i in range(int(input())):
    n = int(input())
    a = "qwertyuasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzqwert"
    l = [0]+list(map(int, input().split()))
    print(a)
    for i in range(1,n+1):
        a = a[:l[i]]+fun(a[l[i]])+a[l[i]+1:]
        print(a)
