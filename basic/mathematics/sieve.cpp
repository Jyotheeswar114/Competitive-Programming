// for all i sieve[i] = 1
// every number is a prime number
for (int i = 2; i <= n; i++)
{
    if (sieve[i] == 1)
    {
        for (int j = 2 * i; j <= n; j += i)
            sieve[j] = 0
    }
}