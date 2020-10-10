#include <stdio.h>
#include <math.h>

double funcos(double e, double x)
{
    double i = 2, j, up, sub = 1, item = 1, flag = -1, sum = 1;
    while (item > e)
    {
        up = pow(x, i);
        for (j = 1, sub = 1; j <= i; j++)
        {
            sub = sub * j;
        }
        item = up / sub;
        sum = sum + flag * item;
        flag = -flag;
        i += 2;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
