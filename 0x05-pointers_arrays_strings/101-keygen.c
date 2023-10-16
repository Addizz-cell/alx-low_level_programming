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

	while (1)
	{
		char password[12];
	}
	for (int i = 0; i < 11; i++)
	{
		password[i] = rand() % 94 + 32;
	}
	password[11] = '\0';

	if (strcmp(password, VALID_PASSWORD) == 0)
	{
		printf("Valid password: %s\n", password);
		break;
	}


	return (0);
}
