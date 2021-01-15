#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, max = 0;
    scanf("%d", &n);
    int input_list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input_list[i]);
    }

    max = input_list[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int z = 0; z < n-j; z++)
            {
                printf("%d ", input_list[j + z]);
                sum += input_list[j + z];
            }
            printf("\n");
            printf("sum => %d\n", sum);
            
        }
        
    }
    

    return 0;
}
