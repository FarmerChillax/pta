#include <stdio.h>
// #include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, sum=0, temp;
    scanf("%d", &n);

    // int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        if (i == n-1) continue;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &temp);
            if(n-j-1 == i) continue;
            if (j == n-1) continue;
            sum += temp;
        }
    }
    

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n -1 ; j++)
    //     {
    //         if(n-j-1 == i) continue;
    //         sum += matrix[i][j];
    //     }
    // }
    printf("%d\n", sum);
    
    // system("pause");
    return 0;
}
