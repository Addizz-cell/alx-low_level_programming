#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: If str is NULL or insufficient memory is available, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length])
		length++;

	dup = malloc(sizeof(char) * (length + 1)); /* +1 for the null terminator */

	if (dup == NULL)
		return (NULL);

	/* Copy the string to the newly allocated memory */
	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
