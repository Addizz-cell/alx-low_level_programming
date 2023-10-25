#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be reversed and printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1); /* Recursively call with incremented pointer */
		_putchar(*s);
	}
}
