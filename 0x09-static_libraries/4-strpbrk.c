#include "main.h"
/**
 * _strpbrk - a function that locates the first occurrence in the string s
* @s: points to a string
* @accept: points to a string
* Return: a pointer to the string s or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	s++;
	}
	return ('\0');
}
