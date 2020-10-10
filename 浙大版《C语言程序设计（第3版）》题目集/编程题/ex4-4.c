#include <stdio.h>
#include <math.h>

int product(int n, int a){
    double res = 0.0;
    for (int i = 0; i < n; i++)
    {
        res += a * pow(10, i);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int a, n;
    double res = 0.0;
    scanf("%d %d", &a, &n);
    for (int i = 1; i <= n; i++)
    {
        res += product(i, a);
    }
    printf("s = %.0lf\n", res);

    return 0;
}
