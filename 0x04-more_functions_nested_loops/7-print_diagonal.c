#include "main.h"
/**
 * print_diagonal - function name
 * @n: parameter
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
