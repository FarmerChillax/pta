#include <stdio.h>

int main(int argc, char const *argv[])
{
    int user_speed, rule_speed;
    double range;
    scanf("%d %d", &user_speed, &rule_speed);
    range = (user_speed - rule_speed) * 100.0 / rule_speed;
    if (range >= 10 && range < 50)
    {
        printf("Exceed %.0f%%. Ticket 200\n", range);
    }else if (range >= 50)
    {
        printf("Exceed %.0f%%. License Revoked\n", range);
    }else
    {
        printf("OK\n");
    }
    
    return 0;
}
