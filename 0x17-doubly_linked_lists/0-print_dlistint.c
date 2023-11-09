#include "lists.h"
/**
 * print_dlistint - prints elements of list
 * @h: list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
