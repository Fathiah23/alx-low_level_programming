#include “main.h”
#include <stdio.h>
/**
* print_diagsums - a function that prints the chessboard
* @a: memory area
* @size: array size
*/
void print_diagsums(int *a, int size)
{
	Int sum1, sum2, y;
	sum1 = 0;
sum2 = 0;

for (y = 0; y < size; y++)
{
sum1 = sum1 + a[y * size + y];
}
for (y = size - 1; y >= 0; y--)
{
Sum2 += a[y * size + (size – y - 1)];
}
printf(“%d, %d\n”, sum1, sum2);
}

