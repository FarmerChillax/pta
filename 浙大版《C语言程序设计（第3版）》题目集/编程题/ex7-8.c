#include "header.h"
#include <math.h>

int main(int argc, char const *argv[])
{
    int cnt = 0, sig = 1, sum = 0;
    char str[80], ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == '-' and sig)
        {
            sig = 0;
        }
        if (ch >= '0' and ch <= '9')
        {
            sig = 0;
            str[cnt] = ch - '0';
            cnt++;
        }else if (ch >= 'A' and ch <= 'F'){
            str[cnt] = ch - 7 - '0';
            cnt++;
        }else if (ch >= 'a' and ch <= 'f')
        {
            str[cnt] = ch - 39 -'0';
            cnt++;
        }
    }

    // 16 -> 10

    for(int i=0;i<cnt;i++){
        //printf("%d ",n[i]);
        sum+=str[i]*pow(16,cnt-i-1);
    }

    if (sig)
    {
        printf("%d", sum);
    }else
    {
        printf("%d", sum * -1);
    }


    return 0;
}
