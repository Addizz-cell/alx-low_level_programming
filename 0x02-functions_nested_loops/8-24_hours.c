#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - take in the hrs and minute
 *
 * Return: AlwYs 0
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while  (hour < 24)
	{
		while (minute < 60)
		{
			printf("%02d:%02d\n", hour, minute);
			minute++;
		}
		hour++;
		minute = 0;
	}
}
