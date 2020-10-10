#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, flag;
    flag = 1;
    float m = 1.0;
    float res = 0;
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        res += flag * (i / m);
        m += 2;
        flag *= -1;
    }
    printf("%.3f\n", res);
    return 0;
}
