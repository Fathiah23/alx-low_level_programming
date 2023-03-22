#include "main.h"
/**
 * print_times_table  - function name
 * @n: integer
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
		}
		for (y = 1; y <= n; y++)
		{
			_putchar(',');
			_putchar(' ');
			x = y * z;
			if (x <= 99)
				_putchar(' ');
			if (x <= 9)
				_putchar(' ');
			if (x >= 100)
			{
				_putchar((x / 100) + '0');
				_putchar((x / 10) % 10 + '0');
			}
			else if (x <= 99 && x >= 10);
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
}
