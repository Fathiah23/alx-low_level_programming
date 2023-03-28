#include "main.h"
/**
 *_strcpy - function name
 * @dest: pointer
 * @src: pointer
 * Return: rest the valkuue off dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
