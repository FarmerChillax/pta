#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len( char *s[], int n );

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int max_len( char *s[], int n ){
    int max_len = 0, temp;
    for (int i = 0; i < n; i++)
    {
        temp = strlen(*(s+i));
        if (temp > max_len) max_len = temp;
    }
    return max_len;
}