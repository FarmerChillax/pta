#include <stdio.h>
#include <stdlib.h>

int reverse( int number ){
    int res_temp = 0;
    do{
        res_temp = res_temp * 10 + number % 10;
        number = number / 10;
    }while(number != 0);
    return res_temp;
}

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);
    
    printf("%d\n", reverse(n));

    system("pause");
    return 0;
}
