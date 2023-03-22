#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
