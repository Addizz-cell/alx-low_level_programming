#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *match = accept;
		while (*match != '\0')
		{
			if (*s == *match)
				return s;
			match++;
		}
		s++;
	}
	return NULL;
}
