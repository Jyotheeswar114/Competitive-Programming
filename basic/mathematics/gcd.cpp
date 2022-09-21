int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
tuple<int, int, int> gcd_v(int a, int b)
{
    if (b == 0)
        return {1, 0, a};
    int x, y, g;
    tie(x, y, g) = gcd(b, a % b);
    return {y, x - (a / b) * y, g};
}