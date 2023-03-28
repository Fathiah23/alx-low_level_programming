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
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
