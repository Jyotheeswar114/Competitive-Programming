import pandas
def isPrime(n) : 
    if (n <= 1) : 
        return False
    if (n <= 3) : 
        return True
    if (n % 2 == 0 or n % 3 == 0) : 
        return False
    i = 5
    while(i * i <= n) : 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i = i + 6
    return True
b = "FastestFinger"
a = "Ashishgup"
for _ in range(int(input())):
    n = int(input())
    if(n == 1):
        print(b)
    elif(n==2):
        print(a)
    elif(n%2 == 1):
        print(a)
    else:
        c = 0
        t = n
        while(n%2 == 0):
            n = n//2
            c += 1
        if(n == 1):
            print(b)
        else:
            if(t//n == 2):
                if(isPrime(n)):
                    print(b)
                else:
                    print(a)
            else:
                print(a)
            
