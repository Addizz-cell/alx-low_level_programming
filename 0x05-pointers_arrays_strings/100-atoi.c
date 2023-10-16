#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: Iterate through the string and convert digits to integer
 * Return: result * sign
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == '-' || s[i] == '+') {
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9') {
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}
