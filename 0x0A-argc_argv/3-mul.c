#include <stdio.h>
#include "main.h"
/**
 * _atoi - called fxn
 * @s: a pointer to a string
 * Return: value of x
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int num = 0;

	while (s[y] != '\0')
		y++;
	while (i < y && z == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			x = x * 10 + num;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}
		if (z == 0)
			return (0);
		return (x);
}
/**
 * main - main fxn body
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
