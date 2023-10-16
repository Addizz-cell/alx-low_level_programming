#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: return thr value
 * @src: return the value
 * Return: dest if none
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
