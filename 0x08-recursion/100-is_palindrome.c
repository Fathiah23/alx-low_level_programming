#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: a string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * _checker - checks and compare 2 strings
 * @s: a string
 * @n1: size of first string
 * @n2: size of second string
 * Return: 0 for success
 */
int _checker(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _checker(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: a string
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_checker(s, 0,  _strlen_recursion(s) - 1));
}
