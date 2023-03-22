#include <stdio.h>
/**
 * main  - main container
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	long  j, k, sum;

	j = 1;
	k = 2;
	sum = k;
	while (k + j < 4000)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
			j = k - j;
		}
	i++;
	}
	printf("%ld\n", sum);
	return (0);
}
