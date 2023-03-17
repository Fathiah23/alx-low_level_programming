#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main container for if-else statement
 * n - gets a random value everytime program is executed
 * Return: prints 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative", n);
	return (0);
}
