#include "main.h"
/**
 * string_toupper - function to change lower case to upper cas
 * @n : a pointer
 * Return: the value n
 */
char *string_toupper(char *n)
{
	int i;

	i  = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (0);
}
