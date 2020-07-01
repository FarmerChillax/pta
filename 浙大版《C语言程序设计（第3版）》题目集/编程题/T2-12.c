#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    if (lower <= upper && upper <= 100)
    {
        /* code */
        double temp_res;
        printf("fahr celsius\n");
        for (int i = lower; i <= upper; i += 2)
        {
            /* code */
            printf("%d%6.1f\n", i, 5 * (i - 32) / 9.0);
        }
        
    }else
    {
        printf("Invalid.\n");
    }
    
    
    return 0;
}
