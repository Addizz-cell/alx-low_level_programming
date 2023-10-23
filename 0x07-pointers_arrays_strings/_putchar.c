#include <unistd.h>
/**
 * _putchar - write te character c to stdout
 * @c: te char to print
 * Return: on success 1.
 * on error,  -1 is returned 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
