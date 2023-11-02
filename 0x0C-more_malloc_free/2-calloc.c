#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
