#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is nagative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is possible\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
