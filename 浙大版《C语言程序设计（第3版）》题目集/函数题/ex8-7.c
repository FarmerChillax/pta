#include <stdio.h>

#define and &&
#define or ||
int main(int argc, char const *argv[])
{
    char intput_str[80], *str_point = intput_str, temp_str[5][80];
    int i=0, j=0, cnt=1, sum = 0;
    scanf("%s", intput_str);
    for (i = 0; str_point[i]; i++, cnt++)
    {
        sum += str_point[i];
        temp_str[j][cnt] = str_point[i];
        if (str_point[i] == ' ')
        {
            temp_str[j][0] = sum;
            j++;
            cnt=0;
            sum = 0;
        }
    }
    
    return 0;
}