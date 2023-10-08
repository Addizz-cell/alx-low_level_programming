#include <stdio.h>

/**
 * main - should print all lowercase aphabet in reversal
 *
 * Return: should return 0 if none
 */

int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
