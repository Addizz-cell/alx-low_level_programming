#include <stdio.h>
#include <unistd.h>
/**
 * main - should print out the speckfic phrase
 *
 * Return: 1 if output is correct ans none other
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
