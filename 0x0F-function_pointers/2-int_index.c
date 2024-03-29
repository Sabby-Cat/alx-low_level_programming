#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - finds index of first element that doesnt return 0
 * @array: array
 * @size: size of array
 * @cmp: fuction to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);
	return (-1);
}
