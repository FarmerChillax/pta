#include "header.h"

int main(int argc, char const *argv[])
{
    int n, col = -1, row = -1;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag;
    for (int i = 0; i < n; i++)
    {
        col = i, row = 0, flag = 1;
        // 找出行最大
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] >= matrix[col][row])
                row = j;
        }

        // 找列表最小
        for (int j = 0; j < n; j++)
        {
            if (matrix[j][row] < matrix[col][row])
                flag = 0;
        }
        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        printf("%d %d\n", col, row);
    }else
    {
        printf("NONE\n");
    }
    

    return 0;
}