#include "main.h"
/**
 * times_table - function name
 *
 */
void times_table(void)
{
	int i, j, x, d, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x > 9)
			{
				u = x % 10;
				d = (x - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			_putchar(x + '0');
			}
		}
	_putchar('\n');
	}
}
