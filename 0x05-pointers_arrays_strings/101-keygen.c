#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 12; i++)
	{
		char password = rand() % 94 + 32;

		printf("%c", password);
	}
	return (0);
}
