#include <stdio.h>
// #include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, temp, index=0, max_num;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if(i == 0) max_num = temp;
        if (temp > max_num)
        {
            max_num = temp;
            index = i;
        }
    }
    printf("%d %d\n", max_num, index);

    // system("pause");
    return 0;
}
