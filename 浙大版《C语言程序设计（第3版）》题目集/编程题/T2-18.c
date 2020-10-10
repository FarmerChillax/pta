#include <stdio.h>


double fact(int n){
    double res = 1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("result = %.0f\n", fact(y) / (fact(x) * fact(y-x)));
    return 0;
}
