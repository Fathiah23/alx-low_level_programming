#include <stdio.h>
/**
 * main - main container
 *
 * Return: 0 always
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		putchar(x);
	}
	putchar('\n');
	return (0);
}
