#include <stdio.h>

int main(int argc, char const *argv[])
{
    float run_distance, charge;
    int wait_time, base;
    base = 10;
    scanf("%f %d", &run_distance, &wait_time);
    if (run_distance <= 3.0)
    {
        /* code */
        printf("%d\n", base + ((int)(wait_time / 5) * 2));
    }else if (run_distance > 3.0 && run_distance < 10.0)
    {
        printf("%.0f\n", base + ((int)(wait_time / 5) * 2) + ((run_distance - 3.0) * 2));
    }else
    {
        printf("%.0f\n", base + (7 * 2) + ((run_distance - 10.0) * 3) + ((int)(wait_time / 5) * 2));
    }

    return 0;
}
