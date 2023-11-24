#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to check
 * @index: The index starting from 0 of the bit you want to get
 *
 * Return: Value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
