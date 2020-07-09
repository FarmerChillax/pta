#include <stdio.h>
#include <math.h>

int CountDigit( int number, int digit ){
    int temp, res = 0;
    if (number == 0 && digit == 0) return 1;
    
    while (number != 0)
    {
        temp = abs(number % 10);
        if (temp == digit)
        {
            res++;
        }
        number = number / 10;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}
