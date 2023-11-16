#include <stdio.h>

/**
 * before_main - Function executed before main
 *
 * Description: Prints a specific message before the main function is executed
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
