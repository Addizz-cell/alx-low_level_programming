#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	int n;

	srand(time(0));
	n = -RAND_MAX / 2;

	printf("The number is: %d\n", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
