#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers as strings
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: Pointer to the result or 0 if the result can't fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = len1 > len2 ? len1 : len2;

	if (max_len + 1 > size_r)
		return (0);

	r[max_len + 1] = '\0';

	while (len1 > 0 || len2 > 0)
	{
		int num1 = len1 > 0 ? n1[--len1] - '0' : 0;
		int num2 = len2 > 0 ? n2[--len2] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[max_len--] = sum % 10 + '0';
	}

	if (carry)
	{
		if (max_len == 0)
			return (0);
		r[max_len] = carry + '0';
		return (r);
	}

	return (r + 1);
}
