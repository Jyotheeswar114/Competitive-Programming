m = int(input())
cost = sorted(list(map(int, input().split())))


def binary_search(x, low):
    high = len(cost) - 1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        if cost[mid] < x:
            low = mid + 1
        elif cost[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1


print(cost)
for i in range(len(cost)):
    temp = binary_search(m - cost[i], i + 1)
    if temp != -1:
        print(i+1, temp + 1)
        break
