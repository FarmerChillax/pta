#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, m, n;
    scanf("%d %d %d %d", &x, &y, &m, &n);
    printf("Sum = %d; Average = %.1f\n", x + y + m + n, (x + y + m + n) / 4.0);
    return 0;
}
