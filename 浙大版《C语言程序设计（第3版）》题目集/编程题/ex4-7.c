#include <stdio.h>

int gcd(int n, int m)
{
    if (n % m == 0)
    {
        return m;
    }
    else
    {
        return gcd(m, n % m);
    }
}

int main(int argc, char const *argv[])
{
    int n, m, res;
    scanf("%d %d", &n, &m);
    res = gcd(n, m);
    printf("%d %d\n", res, n * m / res);

    return 0;
}
