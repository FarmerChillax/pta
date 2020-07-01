#include <stdio.h>

int fact(int n){
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n, res;
    res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        res += fact(i);
    }
    printf("%d\n", res);
    return 0;
}
