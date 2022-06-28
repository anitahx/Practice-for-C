#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * prints random number each time its run
 */

int main()

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("%d\n", n);	

	if (n % 10 > 5)
		printf("it is greater than 5\n");

	else if ( n % 10 == 0)
		printf("it is 0\n");

	else if (n % 10 < 6)
		printf(" is less than 6 and not 0\n");


	return (0);
}
