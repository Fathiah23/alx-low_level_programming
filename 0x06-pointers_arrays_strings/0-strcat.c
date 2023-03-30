#include "main.h"
/**
 * _strcat - a function to concatenate 2 strings
 * @dest: an array
 * @src: an array
 * @n: an integer
 * Return: return value od dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
