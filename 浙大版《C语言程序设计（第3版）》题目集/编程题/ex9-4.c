#include <stdio.h>

struct book_msg
{
    char name[31];
    double Price;
};
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    struct book_msg books[n], max, min;
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(books[i].name);
        scanf("%lf", &books[i].Price);
        if (i == 0)
        {
            max = books[0];
            min = books[0];
        }
        getchar(); //吸收回车
        if (books[i].Price > max.Price)
            max = books[i];
        if (books[i].Price < min.Price)
            min = books[i];
    }

    printf("%.2f, %s\n", max.Price, max.name);
    printf("%.2f, %s\n", min.Price, min.name);

    return 0;
}
