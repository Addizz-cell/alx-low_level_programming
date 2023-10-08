#include <stdio.h>

/**
 * main - print all possible combo of single num in ascd order
 *
 * Return: should return 0 if none
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
