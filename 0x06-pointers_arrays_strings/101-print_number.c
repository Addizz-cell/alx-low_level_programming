#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int power = 1;
	int num = n;

	while (num / 10 > 0)
	{
		power *= 10;
		num /= 10;
	}

	while (power > 0)
	{
		int digit = n / power;

		_putchar(digit + '0');
		n -= digit * power;
		power /= 10;
	}
}
