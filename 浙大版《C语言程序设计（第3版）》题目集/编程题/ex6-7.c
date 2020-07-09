#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op = '0';
    int temp,res, flag=1;
    scanf("%d", &res);
    while (op!='=')
    {
        scanf("%c", &op);
        if (op == '=') break;
        scanf("%d", &temp);
        if (op == '+')
        {
            res += temp;
        }else if (op == '-')
        {
            res -= temp;
        }else if (op == '*')
        {
            res *= temp;
        }else if (op == '/')
        {
            if (temp != 0)
            {
                res /= temp;
            }else
            {
                // error
                flag = 0;
            }
        }else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("ERROR\n");
    }else
    {
        printf("%d\n", res);
    }
        
    return 0;
}
