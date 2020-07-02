#include <stdio.h>

int main(int argc, char const *argv[])
{
    int souc;
    scanf("%d", &souc);
    if (souc >= 90)
    {
        printf("A\n");
    }
    else if (souc >= 80)
    {
        printf("B\n");
    }else if (souc >= 70)
    {
        printf("C\n");
    }else if (souc >= 60)
    {
        printf("D\n");
    }else
    {
        printf("E\n");
    }

    return 0;
}
