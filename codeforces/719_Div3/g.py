import sys
from math import ceil


def map_input(type=1):
    if type == 1:
        return map(int, input().split())
    elif type == 2:
        return map(float, input().split())
    elif type == 3:
        return map(str, input().split())
    return None


def list_input(type=1):
    return list(map_input(type))


def give_excel_column_name(r: int):
    l = 1
    r -= 1
    ans: str = ""
    while 26**l <= r:
        r -= 26**l
        l += 1
    while l > 0:
        ans += (chr(ord('A') + r//26**(l-1) % 26))
        l -= 1
    return ans


def give_excel_column_number(name: str):
    p = 1
    ans: int = 0
    for j in range(len(name)):
        ans = ans + p * ((ord(name[j]) - ord('A')) + 1)
        p = p * 26
    return ans


def sorted_indices(s):
    li = []
    for i in range(len(s)):
        li.append([s[i], i])
    li.sort()
    return [x[1] for x in li]

# https://www.geeksforgeeks.org/floor-in-a-sorted-array/


def floorSearch(arr, x, low=-1, high=-1):
    if low == -1:
        low = 0
    if high == -1:
        high == len(arr) - 1
    if (low > high):
        return -1
    if (x >= arr[high]):
        return high
    mid = int((low + high) / 2)
    if (arr[mid] == x):
        return mid
    if (mid > 0 and arr[mid-1] <= x
            and x < arr[mid]):
        return mid - 1
    if (x < arr[mid]):
        return floorSearch(arr, low, mid-1, x)
    return floorSearch(arr, mid + 1, high, x)


def find_index(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1


def floyd_warshell(g):
    n = len(g)
    d = g.copy()
    for k in range(n):
        for i in range(n):
            for j in range(n):
                d[i][j] = min(d[i][j], d[i][k] + d[k][j])
    return d


def int_input(type=1):
    if type == 1:
        return int(input())
    elif type == 2:
        return float(int(input()))


def range_input():
    return range(int_input())


def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x


def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    for i in range(2, int(n/2) + 1):
        if n % i == 0:
            return False
    return True


class Heap():

    def __init__(self):
        self.array = []
        self.size = 0
        self.pos = []

    def newMinHeapNode(self, v, dist):
        minHeapNode = [v, dist]
        return minHeapNode

    # A utility function to swap two nodes
    # of min heap. Needed for min heapify
    def swapMinHeapNode(self, a, b):
        t = self.array[a]
        self.array[a] = self.array[b]
        self.array[b] = t

    # A standard function to heapify at given idx
    # This function also updates position of nodes
    # when they are swapped.Position is needed
    # for decreaseKey()
    def minHeapify(self, idx):
        smallest = idx
        left = 2*idx + 1
        right = 2*idx + 2

        if left < self.size and self.array[left][1] \
                < self.array[smallest][1]:
            smallest = left

        if right < self.size and self.array[right][1]\
                < self.array[smallest][1]:
            smallest = right

        # The nodes to be swapped in min
        # heap if idx is not smallest
        if smallest != idx:

            # Swap positions
            self.pos[self.array[smallest][0]] = idx
            self.pos[self.array[idx][0]] = smallest

            # Swap nodes
            self.swapMinHeapNode(smallest, idx)

            self.minHeapify(smallest)

    # Standard function to extract minimum
    # node from heap
    def extractMin(self):

        # Return NULL wif heap is empty
        if self.isEmpty() == True:
            return

        # Store the root node
        root = self.array[0]

        # Replace root node with last node
        lastNode = self.array[self.size - 1]
        self.array[0] = lastNode

        # Update position of last node
        self.pos[lastNode[0]] = 0
        self.pos[root[0]] = self.size - 1

        # Reduce heap size and heapify root
        self.size -= 1
        self.minHeapify(0)

        return root

    def isEmpty(self):
        return True if self.size == 0 else False

    def decreaseKey(self, v, dist):

        # Get the index of v in  heap array

        i = self.pos[v]

        # Get the node and update its dist value
        self.array[i][1] = dist

        # Travel up while the complete tree is
        # not hepified. This is a O(Logn) loop
        while i > 0 and self.array[i][1] < self.array[(i - 1) // 2][1]:

            # Swap this node with its parent
            self.pos[self.array[i][0]] = (i-1)//2
            self.pos[self.array[(i-1)//2][0]] = i
            self.swapMinHeapNode(i, (i - 1)//2)

            # move to parent index
            i = (i - 1) // 2

    # A utility function to check if a given
    # vertex 'v' is in min heap or not
    def isInMinHeap(self, v):

        if self.pos[v] < self.size:
            return True
        return False


def main():
    def get_node(x, y):
        return x * m + y
    n, m, w = map_input()
    g = [list_input() for _ in range(n)]
    adj = {i: {} for i in range(n * m)}
    dxy = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    portals = []
    for i in range(n):
        for j in range(m):
            node = get_node(i, j)
            if g[i][j] == -1:
                continue
            if g[i][j] > 0:
                portals.append([node, g[i][j]])
            for dx, dy in dxy:
                tmp_node = get_node(i + dx, j + dy)
                if 0 <= tmp_node < n*m and g[i][j] != -1:
                    adj[node][tmp_node] = w
    print("portals", adj)
    for i in range(len(portals)):
        for j in range(len(portals)):
            if i == j:
                continue
            try:
                adj[portals[i][0]][portals[j][0]] = min(
                    adj[portals[i][0]][portals[j][0]], portals[i][1] + portals[j][1])
            except:
                adj[portals[i][0]][portals[j][0]] = portals[i][1] + portals[j][1]

    dist = []
    inf = 10**17
    minHeap = Heap()
    for v in range(n*m):
        dist.append(inf)
        minHeap.array.append(minHeap.newMinHeapNode(v, dist[v]))
        minHeap.pos.append(v)

    src = 0
    minHeap.pos[src] = src
    dist[src] = 0
    minHeap.decreaseKey(src, dist[src])

    minHeap.size = n * m

    while not minHeap.isEmpty():
        naya_heap_node = minHeap.extractMin()
        u = naya_heap_node[0]
        for v in adj[u]:
            if minHeap.isInMinHeap(v) and dist[u] != inf and adj[u][v] + dist[u] < dist[v]:
                dist[v] = adj[u][v] + dist[u]
                minHeap.decreaseKey(v, dist[v])
    if dist[n*m - 1] == inf:
        print(-1)
    else:
        print(dist[n*m - 1])


if __name__ == "__main__":
    main()
