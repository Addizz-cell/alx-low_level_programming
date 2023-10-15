#include <stdio.h>

/**
 * main - entry point of code
 *
 * Return: 0
 */
int main(void)
{
	long number = 612852475143;
	long factor = 2;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			number = number / factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", factor);
	return (0);
}
