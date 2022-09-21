for _ in range(int(input())):
    n = int(input())
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    if(sorted(l1) == l1):
        print("Yes")
    elif(sum(l2) == n or sum(l2) == 0):
        print("no")
    else:
        print("Yes")
