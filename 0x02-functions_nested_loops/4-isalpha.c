#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if the char is an alphabetic
 * @c: The character to be checked
 *
 * Return: 1 otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
