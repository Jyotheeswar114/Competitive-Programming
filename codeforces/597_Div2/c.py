dp = [-1] * 10000
s = input()
dp[0] = 0
dp[1] = 1
dp[2] = 2
for i in range(3, 10000):
    dp[i] = dp[i-1] + dp[i-2]
mod = 1000000000+7
ans = 1
d = []
i = 0
l = len(s)
while(i < l):
    j = 0
    if(s[i] == 'n'):
        while(i < l and s[i] == 'n'):
            j += 1
            i += 1
        d.append(j)
    elif(s[i] == 'u'):
        while(i < l and s[i] == 'u'):
            j += 1
            i += 1
        d.append(j)
    else:
        i += 1
for i in d:
    ans = (ans * dp[i]) % mod
if('m' in s or 'w' in s):
    print(0)
else:
    print(ans)
