#include "header.h"

int judege(int *matrix[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                if (matrix[i][j] != 0)
                    return 0;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int matrix_num, n;
    scanf("%d", &matrix_num);
    int res[matrix_num];
    for (int z = 0; z < matrix_num; z++)
    {
        // 初始化矩阵
        scanf("%d", &n);
        int matrix[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        // judege
        int flag =1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < i)
                {
                    if (matrix[i][j] != 0)
                        flag = 0;
                }
            }
        }
        // 存放矩阵判断结果
        // res[z] = judege(matrix, n);
        res[z] = flag;
    }

    // 打印结果
    for(int i = 0; i < matrix_num; i++){
        if (res[i])
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
        
        
    }
    
    return 0;
}
