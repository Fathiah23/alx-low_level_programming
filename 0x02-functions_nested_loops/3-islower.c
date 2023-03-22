#include "main.h"
/**
 * _islower - function name
 * @c: an integer
 * Return: 1 for success
 */
int _islower(int c);
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
