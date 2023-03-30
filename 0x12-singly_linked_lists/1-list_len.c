#include "lists.h"
/**
 * list_len - figures out nr of elements in list
 * @h: list
 * Return: len of list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
