#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString(char s[]); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
char *search(char *s, char *t)
{
    char *target_str = NULL;
    int j = 0;

    for (int i = 0; *(s + i) != '\0'; i++)
    {
        for (j = 0; *(t + j) != '\0'; j++)
        {
            if (*(s + i + j) == *(t + j))
                continue;
            break;
        }
        if (*(t + j) == '\0')
        {
            target_str = s + i;
            break;
        }
        i = i + j;
    }
    return target_str;
}

void ReadString(char s[])
{
    gets(s);
}