#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    double res;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        res += sqrt(i);
    }
    printf("sum = %.2f\n", res);
    return 0;
}
