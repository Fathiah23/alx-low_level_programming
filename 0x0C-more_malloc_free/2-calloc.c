#include <stdlib.h>
#include "main.h"
/**
 * _memset - fixn that sets memory to a const
 * @s: memory to be set
 * @b: char
 * @n: no of times to copy n
 * Return: ptr to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - fxn that allocates memory for an array
 * @nmemb: number of elements in array
 * @size:  size of eacyh element
 * Return: pointer to string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
