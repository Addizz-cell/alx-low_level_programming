#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: should return 0 if none
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		++n;
	}
	putchar('\n');

	return (0);
}
