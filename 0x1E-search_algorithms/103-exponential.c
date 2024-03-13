#include "search_algos.h"
/**
  * _binary_search - Search for val in sorted arr of int using binary search
  * @array: pointer to first ele
  * @left: starting index of arr to search
  * @ri: ending index of arr to search
  * @value: value to search for
  * Return: index of val or -1
  */
int _binary_search(int *array, size_t left, size_t ri, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (ri >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < ri; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (ri - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			ri = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

/**
  * exponential_search - Search for val in int arr using exponential search
  * @array: pointer to first ele
  * @size: number of elements
  * @value: value to search
  * Return: index of val or -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, ri;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	ri = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, ri);
	return (_binary_search(array, i / 2, ri, value));
}
