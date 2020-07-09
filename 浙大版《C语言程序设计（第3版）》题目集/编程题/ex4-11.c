#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    if (N == 1)
    {
        printf("1\n");
    }
    else
    {
        int i, count, x1 = 1, x2 = 1, sum = 2, x = 0;
        for (i = 2; x2 < N; i++)
        {
            x = x1 + x2;
            x1 = x2;
            x2 = x;
        }
        printf("%d\n", i);
    }

    return 0;
}
