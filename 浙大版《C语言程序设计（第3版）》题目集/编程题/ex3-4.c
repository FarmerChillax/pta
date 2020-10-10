#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, souc, A, B, C, D, E;
    A = B = C = D = E = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &souc);
        if (souc >= 90)
        {
            A++;
        }
        else if (souc >= 80)
        {
            B++;
        }
        else if (souc >= 70)
        {
            C++;
        }
        else if (souc >= 60)
        {
            D++;
        }
        else
        {
            E++;
        }
    }

    printf("%d %d %d %d %d\n", A, B, C, D, E);

    return 0;
}
