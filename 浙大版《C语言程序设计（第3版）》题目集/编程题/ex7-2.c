#include "header.h"

int main(int argc, char const *argv[])
{
    int n, temp, max=-1;
    scanf("%d", &n);
    int num[10] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        while (temp > 0)
        {
            num[temp%10]++;
            temp /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("%d:", max);
    for (int i = 0; i < 10; i++)
    {
        if(num[i] == max) printf(" %d", i);
    }
    

    return 0;
}
