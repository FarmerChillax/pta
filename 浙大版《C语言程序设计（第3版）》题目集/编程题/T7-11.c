#include "header.h"

int main(int argc, char const *argv[])
{
    int cnt=0;
    char str[80];
    
    while ((str[cnt] = getchar()) != '\n')
    {
        cnt++;
    }

    for (int i = cnt-1; i >= 0 ; i--)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}
