#include <stdio.h>
#include <math.h>

#define MAXS 15

void StringCount( char s[] ){
    int letter, blank, digit, other, n;
    letter = blank = digit = other = 0;

    n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            letter++;
        }else if (s[i] >= '0' && s[i] <= '9')
        {
            digit++;
        }else if (s[i] == ' ' || s[i] == '\n')
        {
            blank++;
        }else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}

int main(int argc, char const *argv[])
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
