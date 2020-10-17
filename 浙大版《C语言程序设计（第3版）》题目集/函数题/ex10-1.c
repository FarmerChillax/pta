#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}


/* 你的代码将被嵌在这里 */
int search(int n)
{
    int a, b, c;
    int res = 0;
    int temp;
    for (int i = 101; i <= n; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = (i / 100) % 10;
        if ( a == b || a == c || b == c)
        {
            temp = sqrt(i);
            if (temp * temp == i)
                res++;
        }
    }
    return res;
}