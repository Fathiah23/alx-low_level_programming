#include "main.h"
/**
 * more_numbers - function name
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1, i <= 10; i++)
		for (j = 0; j <= 14; j++)
			if (j >= 10)
			{
				_putchar(j);
				_putchar(j % 10 * '0');
			}
	putchar('\n');
}
