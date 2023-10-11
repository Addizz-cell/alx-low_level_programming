#include <stdio.h>
#include "main.h"

/**
 * _abs - This function computes the absolute value of num.
 *@num: takes in integer type input for function
 *
 * Return: Always 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
