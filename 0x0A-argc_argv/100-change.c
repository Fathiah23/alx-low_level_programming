#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main fxn body
 * @argc: argumnt count
 * @argv: argumrnt variabl
 * Return: 0 for negavtive int, error for numbers not up to 0,
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	result = 0;
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			result++;
			i = i - coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
