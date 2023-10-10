#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alohabet in lowercase
 *
 * Return: return 0 if none
 */


void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

}
