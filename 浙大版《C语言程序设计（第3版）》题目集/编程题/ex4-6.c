#include <stdio.h>

int my_pow(int temp, int n){
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= temp;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n, temp;
    double start, end, res;
    scanf("%d", &n);
    start = my_pow(10, n-1);
    end = my_pow(10, n);
    for (int i = start; i < end; i++)
    {
        temp = i;
        res = 0;
        while (temp > 0)
        {
            res += my_pow(temp % 10, n);
            temp = temp / 10;
        }
        if (res == i)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}
