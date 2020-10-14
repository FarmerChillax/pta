#include "header.h"
#include <string.h>

#define MAXS 10

void Shift( char s[] ){
    // char *str_point = s;
    char temp[3];
    int i;
    // 存储前三个元素
    for(i = 0; i < 3; i++){
        temp[i] = s[i];
    }
    // 将后面的元素往前挪三个位置，且记录下字符串长度->i
    for (i = 3; s[i]; i++)
    {
        s[i-3] = s[i];
    }

    for (int j = i - 3, i = 0; i < 3; i++)
    {
        s[j++] = temp[i];
    }
    
}


void Shift( char s[] )
{
    char a[3];
    int i,j;
    for(i = 0; i < 3;i++)
        a[i] = s[i];
    for(i=3;s[i]; i++)
        s[i-3]=s[i];
    for(j=i-3, i = 0; i < 3;i++)
        s[j++] = a[i];
}
void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

/* 你的代码将被嵌在这里 */