#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match(char *s, char ch1, char ch2)
{
    int flag = 0;
    char *temp_point = NULL;
    for (int i = 0; *(s + i) != '\0'; i++)
    {

        if (*(s + i) == ch1 && !flag)
        {
            temp_point = (s + i);
            flag = 1;
        }
        if(flag) printf("%c", *(s+i));
        if(*(s+i) == ch2 && flag) break;
    }
    printf("\n");
    if(temp_point == NULL) return s+strlen(s);
    return temp_point;
}