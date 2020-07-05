#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp_input, res;
    res = 0;
    while (1)
    {
        scanf("%d", &temp_input);
        if (temp_input <= 0)
        {
            break;
        }
        if (temp_input % 2 != 0)
        {
            res += temp_input;
        }
        
    }
    printf("%d\n", res);

    return 0;
}
