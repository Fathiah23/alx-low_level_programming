#include "main.h"
/**
 * _isdigit - function name
 * @c: a parameter
 * Return: 1 for true,  for false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
