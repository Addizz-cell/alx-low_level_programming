#include "main.h"

/**
 * positive_or_negative - checks for positive or negative
 * @i: the number to be checked
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else if (i == 0)
		printf("%d is zero",i);
	else
		printf("%d is positive", i);
}
