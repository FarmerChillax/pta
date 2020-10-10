#include <stdio.h>

int main(int argc, char const *argv[])
{
    int flag ,denominator;
    flag = denominator = 1;
    double res, esp, item;
    res = 0.0;
    esp = item = 1.0;
    scanf("%lf", &esp);
    do
    {
        item = flag * 1.0 / denominator;
        res += item;
        denominator += 3;
        flag *= -1;
    } while (fabs(item) > esp);
    
    printf("sum = %.6lf\n", res);

    return 0;
}
