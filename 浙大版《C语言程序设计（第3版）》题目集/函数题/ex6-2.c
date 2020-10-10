#include <stdio.h>
#include <math.h>

int fn( int a, int n ){
    int res = a;
    for (int i = 1; i < n; i++)
    {
        res = res * 10 + a;
    }
    return res;
}

int SumA( int a, int n ){
    int sumA = 0;
    for (int i = 1; i <= n ; i++)
    {
        sumA += fn(a, i);
    }
    return sumA;
}

int main(int argc, char const *argv[])
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));

    return 0;
}
