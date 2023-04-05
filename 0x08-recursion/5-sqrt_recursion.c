#include "main.h"
/**
 * _sqrt - a function
 * @n: given num
 * @i: iterating num
 * Return: -1 if n id greater, i if it is a perfect root number
 */
int _sqrt(int n, int i)
{
	int num = i * i;

	if (num > n)
		return (-1);
	if (num == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: given number
 * Return: return -1 if n is not a natural squaer root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
