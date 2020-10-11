#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &m, &n);
    int matrix[n][n];

    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    m %= n;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            printf("%d ", matrix[i][(n - m + j)%n]);
        }
        printf("\n");
    }

    return 0;
}