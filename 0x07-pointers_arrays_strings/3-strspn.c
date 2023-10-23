#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search
 * @accept: The string containing characters to be matched
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	
	while (*s)
	{
		if (*accept == *s)
		{
			count++;
			found = 0;
			break;
		}

		if (found && !*(accept + 1))
			break;

		if (*accept++ != *s)
		{
			accept -= count;
			count = 0;
			found = 1;
		}

		s++;
	}

	return (count);
}
