#include <stdio.h>

/**
 * main - entry
 * @argc: The number of command line arguments
 * @argv: An array containing the command-line args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
