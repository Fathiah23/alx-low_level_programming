#include "main.h"
/**
 * _print_rev_recursion - prints a sting in reverse
 * @s: a string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
