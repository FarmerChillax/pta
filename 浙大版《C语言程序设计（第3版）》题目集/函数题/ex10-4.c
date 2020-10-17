#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double calc_pow( double x, int n ){
    if(n == 1) return x;
    return x * calc_pow(x, n - 1);
}

double fn( double x, int n ){
    if (n == 1) return x;
    if (n % 2 == 0) return -1 * calc_pow(x, n) + fn(x, n - 1);
    if (n %2 == 1) return calc_pow(x, n) + fn(x, n - 1);
}