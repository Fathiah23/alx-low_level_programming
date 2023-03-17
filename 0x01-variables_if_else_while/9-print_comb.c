#include <stdio.h>
/**
 * main - main container
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			putchar(i + '0');
		if (i != 9)	
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
