#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);
    if (x == 0)
    {
        /* code */
        printf("f(%.1f) = %.1f", x, x);
    }else
    {
        printf("f(%.1f) = %.1f", x, 1.0 / x);
    }
    
    
    return 0;
}