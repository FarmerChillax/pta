#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, min, temp, cnt;
    cnt = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (cnt == 1)
        {
            min = temp;
            cnt++;
        }else if (temp < min)
        {
            min = temp;
        }
        
    }
    printf("min = %d\n", min);
    
    return 0;
}
