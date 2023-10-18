#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i = 0;
	char c;

	while ((c = s[i]))
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if ((c > 'm' && c <= 'z') || (c > 'M' && c <= 'Z'))
			{
				s[i] -= 13;
			}
			else
			{
				s[i] += 13;
			}
		}
		i++;
	}

	return (s);
}
