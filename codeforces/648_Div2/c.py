n = int(input())
a = [0] + list(map(int, input().split()))
b = [0] + list(map(int, input().split()))
db = {b[i]:i for i in range(1,n+1)}

