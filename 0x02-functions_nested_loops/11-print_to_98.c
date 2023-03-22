#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function name
 * @n: an integer
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
			break;
		}
		else
		{
			printf("%d, ", n);
		}
	}
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
			break;
		}
		else
		{
			printf("%d, ", n);
		}
	}
}
