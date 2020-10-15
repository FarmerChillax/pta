#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, *p, n;
    float max, min, average, sum = 0;
    // 分配动态内存
    scanf("%d", &n);
    if( (p = (int *) malloc(n * sizeof(int))) == NULL){
        exit(1);
    }
    // 输入
    for (i = 0; i < n; i++)
        scanf("%d", p+i);

    for(i = 0; i < n; i++){
        sum += *(p+i);
        if (i == 0) max = min = *(p+i);
        if(*(p+i)>max) max = *(p+i);
        if(*(p+i)<min) min = *(p+i);
    }
    printf("average = %2.2f\n", sum / n);
    printf("max = %2.2f\n", max);
    printf("min = %2.2f\n", min);

    return 0;
}
