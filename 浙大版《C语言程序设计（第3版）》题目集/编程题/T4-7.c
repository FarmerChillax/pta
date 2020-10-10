#include <stdio.h>

double fact(int n){
    double res = 1.0;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n;
    double res = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n ; i++)
    {
        res += 1.0 / fact(i);
    }
    printf("%.8f\n", res);
    
    return 0;
}
