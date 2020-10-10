#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* code */
    float x;
    double my_num;
    scanf("%f", &x);
    if (x >= 0)
    {
        /* code */
        printf("f(%.2f) = %.2f", x, sqrt(x));
    }else
    {
        my_num = x + 1.0;
        printf("f(%.2f) = %.2f", x, pow(my_num, 2) + 2.0 * x + 1.0 / x);
    }
    
    
    return 0;
}
