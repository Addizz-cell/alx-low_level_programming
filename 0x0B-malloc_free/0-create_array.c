#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: the size of the array
 * @c: the character to initialize the array
 *
 * Return: If size == 0 or the function fails - NULL
 *         Otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
