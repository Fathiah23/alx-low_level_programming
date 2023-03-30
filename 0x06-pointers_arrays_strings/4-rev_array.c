#include "main.h"
/**
 * reverse_array - funtion to print reverse of an array
 * @a: pointer to an int
 * @n : number of elements in n
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
