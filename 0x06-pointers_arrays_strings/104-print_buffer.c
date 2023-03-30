#include "main.h"
/**
 * print_buffer - function name
 * @b: a parameter
 * @size: a parrameter
 */
void print_buffer(char *b, int size)
{
	int o, j, i;
	
	o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (0 < size)
	{
		j = size - 0 < 10 ? size - 0; 10;
		printf("%08x;", o);
		for (i = 0, i < 10; i++)
		{
			for (i < j)
				printf("%02x", *(b + o + i);

