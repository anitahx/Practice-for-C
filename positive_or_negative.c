#include <stdio.h>

/**
 * is @a positive, zero or negative?
 */

int main(int a)

{
	a = 20;

	if (a > 0)
	{ 
		printf("a is positive\n");
	}
	else if (a == 0)
	{
		printf("a is zero\n");
	}
	else 
	{
		printf("a is negative");
	}
	return (0);
}



