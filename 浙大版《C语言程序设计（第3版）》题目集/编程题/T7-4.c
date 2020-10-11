#include <stdio.h>
// #include <stdlib.h>
#define max 20

int main(int argc, char const *argv[])
{
    // int n, m, input_temp[max], input_temp_2[max];
    // int cnt=0, res[max];
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &input_temp[i]);
    // }
    // scanf("%d", &m);
    // for (int i = 0; i < m; i++)
    // {
    //     scanf("%d", &input_temp_2[i]);
    // }

    int a, b;
    int num1[max] = {0}, num2[max] = {0};
    int temp[max] = {0}, count = 0;
    int i, j, k, flag = 0, flagg = 0;

    scanf("%d", &a);
    for (i = 0; i < a; i++)
        scanf("%d", &num1[i]);
    scanf("%d", &b);
    for (i = 0; i < b; i++)
        scanf("%d", &num2[i]);

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            if (num1[i] == num2[j])
                break;
        if (j >= b)
        {
            for (k = 0; k < count; k++)
                if (num1[i] == temp[k])
                    break;
            if (k >= count)
            {
                temp[count] = num1[i];
                count++;
            }
        }
    }

    for (i = 0; i < b; i++)
    {
        flag = 0;
        for (j = 0; j < a; j++)
            if (num2[i] == num1[j])
                flag = 1;
        if (flag != 1)
        {
            flagg = 0;
            for (k = 0; k < count; k++)
                if (num2[i] == temp[k])
                {
                    flagg = 1;
                    break;
                }
            if (flagg != 1)
            {
                temp[count] = num2[i];
                count++;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d", temp[i]);
        if (i < count - 1)
            printf(" ");
    }

    return 0;
}