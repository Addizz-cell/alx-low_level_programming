#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function pointer to specify how the name should be printed.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
