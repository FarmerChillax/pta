#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;
    double res;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        /* code */
        res += i * i + 1.0 / i;
    }
    printf("sum = %.6f\n", res);
    return 0;
}
