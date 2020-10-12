#include "header.h"

int main(int argc, char const *argv[])
{
    char string[80], target, ch;
    int index = -1, cnt = 0;
    scanf("%c\n", &target);
    scanf("%c", &ch);
    for (int i = 0; ch != '\n'; i++)
    {
        string[i] = ch;
        cnt++;
        scanf("%c", &ch);
    }

    for (int i = 0; i < cnt; i++)
    {
        if (string[i] == target)
            index = i;
    }

    index >= 0 ? printf("index = %d", index) : printf("Not Found");

    return 0;
}
