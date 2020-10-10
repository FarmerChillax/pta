#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, count;
    float sum;
    temp = 0.0;
    count = 0;
    scanf("%d", &n);
    if (n > 0)
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &temp);
            sum += temp;
            if (temp >= 60)
            {
                count += 1;
            }
        }
        printf("average = %.1f\ncount = %d\n", sum / n, count);
    }else
    {
        printf("average = 0.0\ncount = 0\n");
    }
    
    return 0;
}
