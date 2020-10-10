#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count = 0, flag = 1;
    char str[1024];
    char *p;
    gets(str);
    for (p = str;; p++)
    {
        if (*p == '\0')
            break;
        if (*p == ' ')
            flag = 1;
        if (*p != ' ' && flag == 1)
        {
            count++;
            flag = 0;
        }
    }
    printf("%d\n", count);
    return 0;
}
