#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, row;
    scanf("%d", &n);
    row = (n / 2) + 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row - i; j > 0; j--)
        {
            printf("  ");
        }
        for (int target = 0; target < 2 * i - 1; target++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < row; i++)
    {
        for (int tab = 0; tab < i; tab++)
        {
            printf("  ");
        }
        for (int target = (row - i) * 2 - 1; target > 0; target--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
