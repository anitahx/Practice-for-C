#include <stdio.h>

/**
 * guessing game in C
 * @a number to look for
 * Return: 0
 */

int main()

{
	int a;

	printf("enter your guess\n");
	scanf("%d\n", &a);

	if (a == 5)
		printf("HOORAY! you win!\n");

	else
		printf("sorry, try again!\n");

	printf("thank you for playing!\n");

	return (0);
}
