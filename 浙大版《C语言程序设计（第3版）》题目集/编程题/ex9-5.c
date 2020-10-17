#include <stdio.h>

struct birthday
{
    int year;
    int month;
    int day;
};

struct mailList
{
    char name[11];
    struct birthday birthday;
    char phone[18];
};

int main(int argc, char const *argv[])
{
    int n, index = 0;
    scanf("%d", &n);
    getchar();
    struct mailList mail_list[n], temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", mail_list[i].name);
        scanf("%4d%2d%2d", &mail_list[i].birthday.year, &mail_list[i].birthday.month, &mail_list[i].birthday.day);
        scanf("%s", &mail_list[i].phone);
    }

    for (int i = 0; i < n; i++)
    {
        index = i;
        for (int j = i; j < n; j++)
        {
            if (mail_list[j].birthday.year < mail_list[index].birthday.year)
            {
                index = j;
                continue;
            }
            if (mail_list[j].birthday.year == mail_list[index].birthday.year && mail_list[j].birthday.month < mail_list[index].birthday.month)
            {
                index = j;
                continue;
            }
            if (mail_list[j].birthday.year == mail_list[index].birthday.year && mail_list[j].birthday.month == mail_list[index].birthday.month && mail_list[j].birthday.day < mail_list[index].birthday.day)
            {
                index = j;
                continue;
            }
        }
        temp = mail_list[i];
        mail_list[i] = mail_list[index];
        mail_list[index] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %4d%02d%02d %s\n", mail_list[i].name, mail_list[i].birthday.year, mail_list[i].birthday.month, mail_list[i].birthday.day, mail_list[i].phone);
    }

    return 0;
}
