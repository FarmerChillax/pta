#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    scanf("%f", &x);
    if (x <= 50 && x > 0)
    {
        printf("cost = %.2f\n", x * 0.53);
    }else if (x >= 50)
    {
        printf("cost = %.2f\n", (50 * 0.53) + (x - 50) * 0.58 );
    }else
    {
        printf("Invalid Value!\n");
    }
    
    return 0;
}
