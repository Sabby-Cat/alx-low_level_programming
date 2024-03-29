#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in an array of
 * integers using Jump search algorithm
 * @list: input list
 * @size: size of array
 * @value: value to search in
 * Return: index of number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, i, j;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);
	j = (size_t)sqrt((double)size);
	idx = 0;
	i = 0;
	do {
		prev = list;
		i++;
		idx = i * j;
		while (list->next && list->index < idx)
			list = list->next;
		if (list->next == NULL && idx != list->index)
			idx = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);
	} while (idx < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
