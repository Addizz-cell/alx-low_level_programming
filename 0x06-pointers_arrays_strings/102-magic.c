#include <stdio.h>
/**
 * main - check your code
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(&p - 6) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
