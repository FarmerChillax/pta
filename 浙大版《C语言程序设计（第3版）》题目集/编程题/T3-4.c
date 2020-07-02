#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int letter, blank, digit, other;
    letter = blank = digit = other = 0;
    // letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
    for (int i = 0; i < 10; i++)
    {
        ch = getchar();
        if((ch>='a' && ch <= 'z') || (ch >='A' && ch <= 'Z')){
            letter += 1;
        }else if (ch >= '0' && ch <= '9')
        {
            digit += 1;
        }else if (ch == ' ' || ch == '\n')
        {
            blank++;
        }else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    
    return 0;
}
