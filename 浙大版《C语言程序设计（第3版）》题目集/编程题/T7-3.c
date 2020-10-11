#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp_list[1024], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp_list[i]);
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (i==0)
        {
            printf("%d", temp_list[i]);
        }else
        {
            printf("%d ", temp_list[i]);
        }
    }
    printf("\n");

    return 0;
}
