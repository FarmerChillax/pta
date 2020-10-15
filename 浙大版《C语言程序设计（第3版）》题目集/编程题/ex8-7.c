#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[5][80], temp[80];
    int i, j, flag = 1;
    // 获取输入
    for(i = 0; i < 5; i++){
        scanf("%s", str[i]);
    }
    // 冒泡排序
    for( i = 0; i < 5; i++){
        flag = 1;
        for(j = 0; j < 4; j++){
            if(strcmp(str[j], str[j+1]) > 0){
                flag = 0;
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
        if(flag) break;
    }
    // 格式化输出
    printf("After sorted:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    
    return 0;
}