#include "main.h"
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}

		i++;
	}

	return (str);
}
