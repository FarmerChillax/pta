#include <stdio.h>
#include <math.h>

int narcissistic(int number)
{
    int n = 0, temp, temp_pow;
    double res = 0;
    temp = number;
    while (temp != 0)
    {
        n++;
        temp /= 10;
    }

    temp = number;
    while (temp != 0)
    {
        temp_pow = temp % 10;
        res += pow(temp_pow, n);
        temp /= 10;
    }

    if (res == number)
    {
        return 1;
    }
    return 0;
}

void PrintN(int m, int n){
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i)==1)
        {
            printf("%d\n", i);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
