#include "main.h"

/**
 * puts_half - Prints the second half of a string,\n
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
		lenght++;

	if (length % 2 == 0)
		start = lenght / 2;
	else
		start = (length - 1) / 2 + 1;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
