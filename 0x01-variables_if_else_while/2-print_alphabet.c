#include <stdio.h>
/**
 * main  - main container for function statement
 * x - the variable
 * Return: prints  for success
 */
int main(void)
{
	char x;
	
	/* for - line 11 is stressingme out */
	for (int x = 'a'; x <= 'z'; x++);
	/* putchar - print a-z in lowercase */
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
