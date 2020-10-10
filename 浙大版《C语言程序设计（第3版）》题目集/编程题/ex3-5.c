#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x1, y1, x2, y2, x3, y3, distance_1, distance_2, distance_3, L, p;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    distance_1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    distance_2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    distance_3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

    if (distance_1 + distance_2 > distance_3 && distance_1 + distance_3 > distance_2 && distance_2 + distance_3 > distance_1)
    {
        L = distance_1 + distance_2 + distance_3;
        p = L / 2;
        printf("L = %.2f, A = %.2f\n", L, sqrt(p * (p - distance_1) * (p - distance_2) * (p - distance_3)));
    }
    else
    {
        printf("Impossible\n");
    }

    return 0;
}
