#include <stdio.h>
#include "main.h"
/**
 * main - main container for argumnts
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
