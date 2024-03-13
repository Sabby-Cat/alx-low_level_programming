#include "search_algos.h"
/**
 * recur_search - search for value in int array using Binary search algo
 * @array: input array
 * @size: array size
 * @value: value to search
 * Return: index of nr
 */
int recur_search(int *array, size_t size, int value)
{
	size_t prt = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");
	if (prt && size % 2 == 0)
		prt--;
	if (value == array[prt])
	{
		if (prt > 0)
			return (recur_search(array, prt + 1, value));
		return ((int)prt);
	}
	if (value < array[prt])
		return (recur_search(array, prt + 1, value));
	prt++;
	return (recur_search(array + prt, size - prt, value) + prt);
}

/**
 * advanced_binary - calls to recur_search
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of nr
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = recur_search(array, size, value);
	if (idx >= 0 && array[idx] != value)
		return (-1);
	return (idx);
}
