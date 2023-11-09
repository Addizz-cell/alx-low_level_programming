
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameter
 * @n: THe number of parameter
 *
 * Return: the sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}
	
	va_end(args);

	return (sum);
}
