#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    double res, mol, den, temp;
    res = 0.0;
    mol = 2.0;
    den = 1.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        res += (double)mol / den;
        temp = mol; // mark mol
        mol = temp + den; // new mol
        den = temp;
    }
    printf("%.2lf\n", res);

    return 0;
}
 