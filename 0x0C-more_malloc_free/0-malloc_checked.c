#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory to malloc
 * @b: no of byte to allocate
 * Return: a pointer to allocated malloc
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
