#include <stdio.h>
#include "main.h"
/**
 * main - main function body
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
