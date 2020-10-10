#include <stdio.h>

int prime_num(int n)
{
    int flag = 1;
    if (n == 1)
        flag = 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                flag = 0;
        }
    }
    return flag;
}

int main(int argc, char const *argv[])
{
    int m, n, flag, cnt, res;
    res = cnt = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        flag = 0;
        flag = prime_num(i);
        if (flag == 1)
        {
            cnt++;
            res += i;
        }
    }
    printf("%d %d\n", cnt, res);

    return 0;
}
