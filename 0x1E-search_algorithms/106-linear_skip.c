#include "search_algos.h"
/**
 * linear_skip - search for value in skip list
 * @list: list to search
 * @value: value to search
 * Return: index of number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *sto;

	if (list == NULL)
		return (NULL);
	sto = list;
	do {
		list = sto;
		sto = sto->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)sto->index, sto->n);
	} while (sto->express && sto->n < value);
	if (sto->express == NULL)
	{
		list = sto;
		while (sto->next)
			sto = sto->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)sto->index);
	while (list != sto->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
