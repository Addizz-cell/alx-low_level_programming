#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print the sign
 * @n: The number to be chechked
 *
 * Return: 1 if n is greater than zero, 0 if n is * zero, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n < 0)
	{
		putchar('-');
		return -1;
	}
	else
	{
		putchar('0');
		return 0;
	}
}
