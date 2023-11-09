#include "lists.h"
/**
 * dlistint_len - counts entrys
 * @h: lists
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
		size_t c;

		for (c = 0; h != NULL; c++)
		{
			h = h->next;
		}
		return (c);
}
