#include "main.h"
/**
 * _strlen  - prints the length of a string
 * @s: a character
 * Return: return the value of a
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
