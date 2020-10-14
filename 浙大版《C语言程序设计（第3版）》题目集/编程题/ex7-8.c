#include "header.h"
#include <math.h>

int main(int argc, char const *argv[])
{
    int cnt = 0, sig = 1, sum = 0, flag=1; // 默认正数
    char str[80], ch;

    while ((ch = getchar()) != '#')
    {

        if (ch == '-' and sig == 1)
        {
            sig = 0;
            flag = 0;
        }
        if (ch >= '0' and ch <= '9') 
        {
            sig = 0;
            str[cnt] = ch - '0';
            cnt++;
        }else if (ch >= 'A' and ch <= 'F')
        {
            sig = 0;
            str[cnt] = ch - 'A' + 10;
            cnt++;

        }else if (ch >= 'a' and ch <= 'f')
        {
            sig = 0;
            str[cnt] = ch - 'a' + 10;
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        // printf("%d", str[i]);
        sum += str[i] * pow(16.00, cnt - 1 -i);
    }

    if (flag)
    {
        printf("%d", sum);
    }else
    {
        printf("%d", sum * -1);
    }

    return 0;
}
