#include <stdio.h>

/**
 * main - print alphabet in lower case
 * @alpha - lower case 
 */

int main()

{
	char alpha;

	{
	for (alpha = 'a'; alpha <= 'z'; alpha++) 

		printf("%c", alpha);
	}
	printf("\n");

	return (0);
}
