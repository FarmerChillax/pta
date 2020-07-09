#include <stdio.h>
#include <math.h>

int prime( int p ){
    if (p <= 1) return 0;
    if (p == 2) return 1;
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0) return 0;
    }
    return 1;
}

int PrimeSum( int m, int n ){
    int res = 0;
    for (int i = m; i <= n; i++)
    {
        if (prime(i) == 1)
        {
            res += i;
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
