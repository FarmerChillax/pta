#include "header.h"

int main(int argc, char const *argv[])
{
    char str[80];
    int cnt=0;
    while ((str[cnt] = getchar()) != '\n')
    {
        if(str[cnt] >= 'A' and str[cnt] <= 'Z'){
            str[cnt] = ('Z' - (str[cnt] - 'A'));
        }
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
