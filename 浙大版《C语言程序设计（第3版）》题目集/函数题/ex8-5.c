#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s ){
    int i;
    t = t + m - 1;
    for (i = 0; *t; i++, t++)
        s[i] = *t;
    s[i] = '\0';
}

// void strmcpy( char *t, int m, char *s ){
//     int i, j;
//     for (i = m-1, j=0; t[i]; i++, j++)
//     {
//         s[j] = t[i];
//     }
//     s[j]='\0';
// }