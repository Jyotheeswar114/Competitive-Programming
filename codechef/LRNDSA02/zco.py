n = int(input())
l = list(map(int, input().split()))
st = [(1, 0)]
lon, lon_st = 0, 0
dep, dep_st = 1, 0
for i in range(1, n):
    if l[i] == 2:
        temp = st.pop()
        if(len(st) == 0):
            if lon < i - temp[1] + 1:
                lon = i - temp[1] + 1
                lon_st = temp[1]
    else:
        st.append((1, i))
        if dep < len(st):
            dep = len(st)
            dep_st = i
print(dep, dep_st + 1, lon, lon_st + 1)
