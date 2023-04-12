#include "main.h"
/**
 * str_concat - a fxn that concatenates two strings
 * @s1: pointer to the content of s1
 * @s2: pointer to the content of s2
 * Return: 0 always
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] !='\0')

}
