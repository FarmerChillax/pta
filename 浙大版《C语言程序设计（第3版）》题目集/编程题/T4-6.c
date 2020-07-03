#include <stdio.h>

int main(int argc, char const *argv[])
{
    int random_num, max_try, temp, try_num, flag;
    flag = try_num = 0;
    scanf("%d %d", &random_num, &max_try);
    for (int i = 0; i < max_try; i++)
    {
        try_num += 1;
        scanf("%d", &temp);
        if (temp < 0)
        {
            printf("Game Over\n");
            flag = 1;
            break;
        }
        else if (temp > random_num)
        {
            printf("Too big\n");
        }
        else if (temp < random_num)
        {
            printf("Too small\n");
        }
        else if (try_num == 1 && temp == random_num)
        {
            printf("Bingo!\n");
            flag = 1;
            break;
        }
        else if (try_num <= 3 && temp == random_num)
        {
            printf("Lucky You!\n");
            flag = 1;
            break;
        }
        else
        {
            printf("Good Guess!\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Game Over\n");
    }

    return 0;
}
