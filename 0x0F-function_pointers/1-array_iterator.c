#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A pointer to the function to be executed on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
