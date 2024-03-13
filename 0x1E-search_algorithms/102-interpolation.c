#include "search_algos.h"
/**
 * interpolation_search - search for val in int arr using Interpolation algo
 * @array: input array
 * @size: array size
 * @value: value to search in
 * Return: index of nr
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t cur, l, h;
	double sto;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	while (size)
	{
		sto = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		cur = (size_t)(l + sto);
		printf("Value checked array[%d]", (int)cur);
		if (cur >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[cur]);
		}
		if (array[cur] == value)
			return ((int)cur);
		if (array[cur] < value)
			l = cur + 1;
		else
			h = cur - 1;
		if (l == h)
			break;
	}
	return (-1);
}
