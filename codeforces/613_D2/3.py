def gcd(a,b):
    if(a==0):
        return b;
    return gcd(b%a,a)
def lcm(a,b):
    return (a*b)/gcd(a,b)
x=int(input())
for i in range(int(x**0.5),0,-1):
    if(x%i==0 and lcm(i,x/i)==x):
        print(i,x//i)
        break
