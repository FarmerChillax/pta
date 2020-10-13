#include "header.h"

int main(int argc, char const *argv[])
{
    int n, temp, max_index=0;
    int num_list[10];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_list[i]);
    }
    // printf("%d\n", num_list[0]);
    for (int i = 0; i < n; i++)
    {
        max_index = i;
        for (int j = i; j < n; j++)
        {
            if(num_list[j] > num_list[max_index]){
                max_index = j;
            }
        }
        temp = num_list[i];
        num_list[i] = num_list[max_index];
        num_list[max_index] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i < n -1)
        {
            printf("%d ", num_list[i]);
        }else
        {
            printf("%d", num_list[i]);
        }
    }

    return 0;
}
