#include <stdio.h>
#define and &&
#define or ||


int main(int argc, char const *argv[])
{
    int months[13] ={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day, res=0;
    scanf("%d/%d/%d", &year, &month, &day);
    if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0)
    {
        months[2] = 29;
    }

    for (int i = 0; i < month; i++)
    {
        day += months[i];
    }
    
    printf("%d", day);
    
    return 0;
}
