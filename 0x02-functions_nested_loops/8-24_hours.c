#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - take in the hrs and minute
 *
 * Return: AlwYs 0
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while  (i < 24)
	{
		j = 0;
		while (i < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
