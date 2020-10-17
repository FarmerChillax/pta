#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("start...\n");
	// printf("%d\n", argc);
	// for (int i = 0; i < argc; i++)
	// {
	// 	printf("%s\n", argv[i]);
	// }

	// int *p=NULL;
	// int x = 233;
	// p = &x;
	// printf("%p -> %d\n", x, x);
	// printf("%p -> %d\n", p, *p);
	// printf("%p %p\n", p, &x);
	// char str[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	// char nums[] = {'0', '1', '2', '3', '4', '5'};
	// for (int i = 0; i < 6; i++)
	// {
	// 	printf("%c -> %d\n", str[i], str[i]);
	// }

	// // printf("%c -> %d\n", 10, 10);
	// for (int i = 0; i < 6; i++)
	// {
	// 	printf("%c -> %d\n", nums[i], nums[i]);
	// }
	// printf("", 'a');
	// char x = 'a', y = 'b';

	// printf("%d\n", (x - 'a' + 10) + (y - 'a' + 10 ));
	// int i, m=7;
	// char a[20] = "happy new year", b[20];
	// char *a_point = a;
	// a_point += m;
	// for (i = 0; *a_point; i++, a_point++)
	// {
	// 	b[i] = *a_point;
	// }
	// b[i] = '\0';
	// printf("%s\n", b);
	// printf("%d\n", 5 * sizeof(int));
	// printf("%.2f\n", 3);
// int i,x,y;	
// i=x=y=0;
// do {
// 	++i;
// 	if ( i%2 ) 
// 		x+=i, 
// 	i++;
// 	y +=i++;
// } while ( i<=7 );
// printf("%d %d %d", i, x, y);
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int *p=a, i = 5;

	printf("%d\n",p+5);
	return 0;
}
