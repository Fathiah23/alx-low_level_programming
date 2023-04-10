#include "main.h"
/**
 * _strncpy - function name
 * @dest: an array
 * @scr: an array
 * @n: number of element in array
 * Return: tbevalue of dest
 */
char *_strncpy(char *dest, char *scr, int n)
{
	int j;

	j = 0;
	while (j < n && scr[j] != '\0')
	{
		dest[j] = scr[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
