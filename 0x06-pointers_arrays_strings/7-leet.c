#include "main.h"

/**
 * leet - encode a string into 1337.
 * letters a and A are replaced by 4.
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaces by 7
 * letters l and L are replaced by 1
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */

char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";


	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
