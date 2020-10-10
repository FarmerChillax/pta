#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int temp_input;
    scanf("%d", &temp_input);
    for (int i = 0; i <= temp_input; i++)
    {
        printf("pow(3,%d) = %.0f\n", i,pow(3,i));
    }
    
    return 0;
}
