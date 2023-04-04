#include "main.h"
/**
 *  _strchr - a function to fill memory with a constant byte
 * @s: memory area
 * @c:  a char data type
 * Return: memory area dest
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
