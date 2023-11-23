#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(n) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bits >= 0)
	{
		if ((n >> bits) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || bits == 0)
			_putchar('0');
		bits--;
	}
}
