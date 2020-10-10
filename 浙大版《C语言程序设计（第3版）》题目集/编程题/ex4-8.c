#include <stdio.h>

int main(int argc, char const *argv[])
{
    double distance, height, N, res_height;
    scanf("%lf %lf", &height, &N);
    distance = res_height = height;
    if (N == 0.0)
    {
        printf("%.1lf %.1lf\n", 0.0, 0.0);
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            res_height /= 2.0;
            distance += res_height * 2;
        }
        distance -= res_height * 2;
        printf("%.1lf %.1lf\n", distance, res_height);
    }

    return 0;
}
