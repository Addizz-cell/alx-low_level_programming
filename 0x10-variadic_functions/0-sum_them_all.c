#include <stdarg.h>

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

	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; == i)
	{
		sum += va_args(args, int);
	}
	va_end(args);
	return (sum);
}
