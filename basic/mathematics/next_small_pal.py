def all9(s):
    for i in s:
        if i != 9:
            return True
    return False

def solve(self, A):
    n = len(A)
    if all9(A):
        print(1, (n-1)*'0', 1, sep="")
    if n % 2 == 0:
        left = A[:n//2]
        right = A[n//2:][::-1]
    else:
        left = A[:n//2]
        middle = A[n//2]
        right = A[n//2 + 1:][::-1]
    i, j = 0, 0
    while i < n//2 and j < n//2 and left[i] == right[j]:
        i += 1
        j += 1
    if i == n//2:
        c = 0
        if n % 2 == 1:
            c = (int(middle) + 1) // 10
            middle = (int(middle) + 1) % 10
        for k in range(n//2, -1, 0):
            temp = int(left[k]) + c
            left[k] = str(temp % 10)
            right[k] = left[k]
            c = temp // 10
        return left + middle + right[::-1]
    if left[i] > right[i]:
        for k in range(i, n//2):
            right[k] = left[k]
        return left + middle + right[::-1]
    if n % 2 == 1:
            c = (int(middle) + 1) // 10
            middle = (int(middle) + 1) % 10
        for k in range(n//2, -1, 0):
            temp = int(left[k]) + c
            left[k] = str(temp % 10)
            right[k] = left[k]
            c = temp // 10
        return left + middle + right[::-1]