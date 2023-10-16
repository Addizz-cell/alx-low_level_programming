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

	char password[13];
	int i = 0;

	while (i < 12);
	{
		password[i] = rand() % 94 + 32;
		i++;
	}
	password[12] = ‘\O’;

	printf(“%s\n”, password);

	return (0);
}
