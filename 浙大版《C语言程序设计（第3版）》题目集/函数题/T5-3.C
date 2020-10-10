#include <stdio.h>

void pyramid( int n ){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int target = i; target > 0; target--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}
