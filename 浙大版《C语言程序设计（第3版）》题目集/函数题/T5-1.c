 #include <stdio.h>

int sum(int m, int n)
{
    int res = 0;
    for (int i = m; i <= n; i++)
    {
        res += i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}
