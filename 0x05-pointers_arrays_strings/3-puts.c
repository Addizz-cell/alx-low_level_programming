#include "main.h"

void _putchar(char c);

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
