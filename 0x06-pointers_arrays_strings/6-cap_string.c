#include "main.h"
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @s: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int capitalize = 1;

	while (*s)
	{
		if (capitalize && *s >= 'a' && *s <= 'z')
		{
			*s -= 32;
			capitalize = 0;
		}

		if (is_separator(*s))
		{
			capitalize = 1;
		}

		s++;
	}

	return (s);
}
