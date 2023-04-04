#include "main.h"
/**
* _strstr - a function that finds the first occurrence of the a substring
* @haystack: points to a substring
* @needle: points to a string
* Return: a pointer to the beginning of the located substring else NULL
*/
char *_strstr(char *haystack, char *needle)
{
	for (; haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *e = needle;

		while (*d == *e && *e != '\0')
		{
			d++;
			e++;
		}
		if (*e == '\0')
			return (haystack);
	}
	return (0);
}
