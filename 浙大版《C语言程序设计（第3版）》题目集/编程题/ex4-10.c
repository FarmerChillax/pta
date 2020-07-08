#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, res;
    scanf("%d", &n);
    res = 1;
    for (int i = 1; i < n; i++)
    {
        res = (res + 1) * 2;
    }
    printf("%d\n", res);

    return 0;
}
