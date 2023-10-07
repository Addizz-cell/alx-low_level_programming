#include <stdio.h>
/**
 * main -prints the alphabet in lowercase,  uppercase, followed by a new line
 *
 * Return: should return 0
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
