#include "main.h"

int find_sqrt(int n, int i);

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

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Helper function to find the square root using recursion
 * @n: The number for which to find the square root
 * @i: The divisor to check for the square root
 *
 * Return: The square root if found, -1 if not found.
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (find_sqrt(n, i + 1));
}
