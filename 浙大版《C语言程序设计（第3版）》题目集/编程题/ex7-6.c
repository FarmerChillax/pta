#include "header.h"

int main(int argc, char const *argv[])
{
    char str[80], res = 0;
    int cnt = 0;
    while ((str[cnt] = getchar()) != '\n')
    {
        cnt++;
    }

    for (int i = 0; i < cnt; i++)
    {
        if (str[i] >= 'A' and str[i] <= 'Z')
        {
            if (str[i] != 'A' and str[i] != 'E' and str[i] != 'I' and str[i] != 'O' and str[i] != 'U')
            {
                res++;
            }
        }
    }

    printf("%d\n", res);

    return 0;
}
