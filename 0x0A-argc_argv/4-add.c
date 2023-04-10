#include <stdi0.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - funtion name
 * @str: array of strings
 * Return: 1 for success
 */
int check_num(char *str)
{
	unsigned int k;

	k = 0;
	while (k < strlen(str))
	{
		if (!isdigit(str[k]))
			return (0);
		k++;
	}
	return (1);
}
/**
 * main - main fxn body
 * @argc: argumeent count
 * @argv: argument variable
 * Return: 0 for success, Otherwise Error
 */
int main(int argc, char *argv)
{
	int a, b, result;

	if (a == && b == )
		printf("0\n");
	if (
