#include <stdio.h>
#include "100-operations.h"

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		printf("Error: Cannot divide by zero\n");
		return 0;
	}
}

int mod(int a, int b)
{
	if (b != 0) {
		return a % b;
	}
	else
	{
		printf("Error: Cannot calculate modulus by zero\n");
		return 0;
	}
}
