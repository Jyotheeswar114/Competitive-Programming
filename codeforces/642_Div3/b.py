for _ in range(int(input())):
    n,k = map(int, input().split())
    a = sorted(list(map(int, input().split())))
    b = sorted(list(map(int, input().split())), reverse = True)
    a.extend(b[:k])
    a.sort(reverse = True)
    print(sum(a[:n]))
    
