#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1)); /* Recursive call with incremented pointer */
	else
		return (0);
}
