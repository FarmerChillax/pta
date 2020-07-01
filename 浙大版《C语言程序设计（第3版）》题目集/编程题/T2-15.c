#include <stdio.h>

int main(int argc, char const *argv[])
{
    int target;
    double res;
    int flag = 1;
    int j = 1;
    scanf("%d", &target);
    for (int i = 1; i <= target; i++)
    {
        res += flag * (1.0 / j);
        j += 3;
        flag *= -1;
    }
    printf("sum = %.3f", res);
    return 0;
}