#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int ArrayShift( int a[], int n, int m ){
    int i, temp[m];
    m %= n; // 解决 m > n (位移大于数组长度) 的bug
    for (i = 0; i < m; i++)
        temp[i] = a[n-m + i];
    
    for (i = n-m; i >= 0; i--)
        a[i+m] = a[i];

    for (i = 0; i < m; i++)
        a[i] = temp[i];
}