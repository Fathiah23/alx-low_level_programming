#include "main.h"
/**
 * _memset - a function to fill memory with a constant byte
 * @s: memory area
 * @b:  constant byte
 * @n: size
 * Return: memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
