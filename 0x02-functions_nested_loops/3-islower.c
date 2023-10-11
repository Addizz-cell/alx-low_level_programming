#include <stdio.h>
#include "main.h"

/**
 * _slower - check if a character is powercase
 * @c: The character to be checked
 *
 * Return: return 1 if c is lowercse, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
