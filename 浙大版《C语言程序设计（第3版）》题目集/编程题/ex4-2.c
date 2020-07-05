#include <stdio.h>
#include <math.h>

double fact(int n){
    double res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    double n, x, temp, res;
    n = res = 1.0;
    scanf("%lf", &x);
    do
    {
        temp = pow(x, n) / fact(n);
        res += temp;
        n++;
    } while (fabs(temp) >= 0.00001);

    printf("%.4lf\n", res);

    return 0;
}
