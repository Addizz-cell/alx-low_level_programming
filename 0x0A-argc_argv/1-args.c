#include  <stdio.h>
/**
 * main - Entry point of the code
 * @argc: number of arguments passed into it
 * @argv: strings containing the command-line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
