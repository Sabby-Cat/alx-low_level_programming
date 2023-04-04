#include "lists.h"
/**
 * listint_len - finds nr of elements in list
 * @h: list
 * Return: nr of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
