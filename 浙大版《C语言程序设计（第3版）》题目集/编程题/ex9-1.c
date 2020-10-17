#include <stdio.h>

#define and &&
#define or ||

struct date
{
    int hour;
    int min;
    int second;
};

int main(int argc, char const *argv[])
{
    struct date temp_date = {0, 0, 0};
    int n;
    scanf("%d:%d:%d %d", &temp_date.hour, &temp_date.min, &temp_date.second, &n);
    temp_date.second += n;
    if (temp_date.second >= 60)
    {
        temp_date.min++;
        temp_date.second -= 60;
    }
    if (temp_date.min >= 60)
    {
        temp_date.min -= 60;
        temp_date.hour++;
    }
    if (temp_date.hour >= 24)
    {
        temp_date.hour -= 24;
    }
    printf("%02d:%02d:%02d", temp_date.hour, temp_date.min, temp_date.second);

    return 0;
}