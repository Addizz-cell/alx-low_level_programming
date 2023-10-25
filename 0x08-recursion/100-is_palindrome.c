#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, length));
}

/**
 * check_palindrome - Check if a string is a palindrome recursively.
 * @s: The string to check.
 * @length: The length of the string.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int check_palindrome(char *s, int length)
{
	if (length <= 1)
		return (1);
	if (*s != s[length - 1])
		return (0);
	return (check_palindrome(s + 1, length - 2));
}

/**
 * _strlen_recursion - Calculate the length of a string recursively.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
