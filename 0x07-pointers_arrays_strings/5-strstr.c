#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return:  NULL if none found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = hatstack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (start);
		hytstack = start + 1;
	}
	return (NULL);
}
