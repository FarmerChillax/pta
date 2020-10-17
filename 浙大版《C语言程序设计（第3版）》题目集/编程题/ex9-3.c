#include <stdio.h>

struct point{
    double x_point;
    double y_point;
};

int main(int argc, char const *argv[])
{
    struct point x, y, sum;
    scanf("%lf %lf %lf %lf", &x.x_point, &x.y_point, &y.x_point, &y.y_point);
    sum.x_point = x.x_point + y.x_point;
    sum.y_point = x.y_point + y.y_point;
    if(sum.x_point > -0.05 && sum.x_point < 0) sum.x_point = 0;
    if(sum.y_point > -0.05 && sum.y_point < 0) sum.y_point = 0;
    printf("(%.1lf, %.1lf)", sum.x_point, sum.y_point);

    return 0;
}
