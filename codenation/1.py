
n = int(input())
a = list(map(int, input().split()))
l = 0
r = n - 1
turn = False
q = [-1]
def fun(l, r, turn, k):
    if l == r:
        if k < a[r]:
            return turn
        else:
            return not turn
    if k < a[l] and k < a[r]:    
        if turn == False:
            return fun(l+1,r, True, a[l]) and fun(l,r-1, True, a[r])
        else:
            return fun(l+1,r, False, a[l]) or fun(l,r-1, False, a[r])
    elif k < a[l]:
        return fun(l + 1, r, not turn, a[l])
    elif k < a[r]:
        return fun(l, r - 1, not turn, a[r])
    else:
        return not turn

if fun(l, r, turn, -1) == False:
    print("Ipsita")
else:
    print("Aanchal")
    