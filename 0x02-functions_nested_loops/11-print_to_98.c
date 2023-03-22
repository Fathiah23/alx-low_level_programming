#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function name
 * @n: an integer
 */
void print_to_98(int n)
{
	if (n <= 98);
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			continue;
			printf(",");
		}
	}
	else
	{
		for (; n >= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			continue;
			printf(",");
		}
		printf("\n");
	}
}
