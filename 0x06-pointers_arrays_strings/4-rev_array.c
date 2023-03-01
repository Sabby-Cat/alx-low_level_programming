#include "main.h"
/**
 * reverse_array - reverses the content of an array of ints
 * @a: array to be reversed
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
