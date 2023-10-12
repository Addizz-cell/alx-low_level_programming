#include <stdio.h>
#include "main.h"

/**
 * times_table - code goes her for the function
 *
 */
void times_table(void)
{
	int i = 0, j = 0;


	while (i <= 9)
	{
		while (j <= 9)
		{
			if (j == 9)
			{
				printf("%d\n", i * j);
			}
			else
			{
				printf("%d, ", i * j);
			}
			j++;
		}
		i++;
		j = 0;
	}
}

