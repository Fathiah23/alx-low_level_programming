#include "main.h"
/**
 * _prime - a function
 * @n: an integer
 * @i: an integer
 * Return: prime
 */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		return (i);
	return (_prime(n, i + 1));
}
/**
 * is_prime_number - checks if int is a prime number
 * @n: given int
 * Return: if n is a prime number, 0 if false
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
