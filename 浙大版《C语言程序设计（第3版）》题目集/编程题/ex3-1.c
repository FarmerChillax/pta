#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp_list[3];
    int temp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp_list[i]);
    }
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2 - x; y++)
        {
            if (temp_list[y] > temp_list[y + 1])
            {
                temp = temp_list[y + 1];
                temp_list[y + 1] = temp_list[y];
                temp_list[y] = temp;
            }
        }
    }

    printf("%d->%d->%d\n", temp_list[0], temp_list[1], temp_list[2]);

    return 0;
}
