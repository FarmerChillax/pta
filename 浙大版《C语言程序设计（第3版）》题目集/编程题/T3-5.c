#include <stdio.h>

int main(int argc, char const *argv[])
{
    int  year, flag;
    scanf("%d", &year);
    if (year > 2000 && year <= 2100)
    {
        flag = 1;
        for (int i = 2001; i <= year; i++)
        {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            {
                flag = 0;
                printf("%d\n", i);
            }
        }
        if (flag == 1)
        {
            printf("None\n");
        }
        

    }else
    {
        printf("Invalid year!\n");
    }
    
    return 0;
}
