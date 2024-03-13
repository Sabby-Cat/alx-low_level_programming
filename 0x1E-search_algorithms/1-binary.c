#include "search_algos.h"
/**
 * binary_recur - recusrive algorithm for binary search
 * @array: pointer to first pos
 * @size: array size
 * @value: value to search
 * Return: index of value
 */
size_t binary_recur(int *array, size_t size, int value)
{
	size_t cent = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], (i != size - 1) ? ", " : "\n");
	if (cent && size % 2 == 0)
		cent--;
	if (value == array[cent])
		return (cent);
	if (value < array[cent])
		return (binary_recur(array, cent, value));
	cent++;
	return (binary_recur(array + cent, size - cent, value) + cent);
}
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer ti first position of array
 * @size: length of array
 * @value: value to search
 * Return: index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int val;

	val = binary_recur(array, size, value);
	if (val >= 0 && array[val] != value)
		return (-1);
	return (val);
}
