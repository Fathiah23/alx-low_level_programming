#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - fxn that prints a name
 * @name: ptr to name array
 * @f: fxn ptr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
