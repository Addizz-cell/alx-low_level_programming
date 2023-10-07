#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: should return o
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	return (0);
}
