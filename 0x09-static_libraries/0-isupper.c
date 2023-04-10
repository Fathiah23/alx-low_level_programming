#include <ctype.h>
#include "main.h"
/**
 * _isupper - function name
 * @c: a parameter
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
