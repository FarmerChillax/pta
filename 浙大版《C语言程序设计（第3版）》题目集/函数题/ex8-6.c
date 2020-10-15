#include <stdio.h>
#define MAXN 20

void delchar(char *str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
void delchar(char *str, char c)
{
    char *s_point;
    s_point = str;
    if (str != NULL)
    {
        for (int i = 0; *str; str++)
        {
            if (*str != c)
            {
                *s_point = *str;
                s_point++;
            }
        }
        *s_point = *str;
    }
}

// void delchar(char *str, char c)
// {
//     char *s;

//     s = str;

//     if (str != NULL)
//     {
//         while (*str)
//         {
//             if (*str != c)
//             {
//                 *s = *str;
//                 s++;
//             }

//             str++;
//         }

//         *s = *str;
//     }

//     return;
// }