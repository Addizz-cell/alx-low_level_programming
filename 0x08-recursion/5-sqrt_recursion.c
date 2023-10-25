#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The square root if found, -1 if not found or for negative values.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, n / 2, n));
}
