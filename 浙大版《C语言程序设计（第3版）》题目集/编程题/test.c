#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("start...\n");
	// int *p=NULL;
	// int x = 233;
	// p = &x;
	// printf("%p -> %d\n", x, x);
	// printf("%p -> %d\n", p, *p);
	// printf("%p %p\n", p, &x);
	char str[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	char nums[] = {'0', '1', '2', '3', '4', '5'};
	for (int i = 0; i < 6; i++)
	{
		printf("%c -> %d\n", str[i], str[i]);
	}
	
	// printf("%c -> %d\n", 10, 10);
	for (int i = 0; i < 6; i++)
	{
		printf("%c -> %d\n", nums[i], nums[i]);
	}
	printf("", 'a');


	return 0;
}
