#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: list
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	int sto;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sto = *h - (*h)->next;
		if (sto > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			c++;
		}
		else
		{
			*h = NULL;
			c++;
			break;
		}
	}
	*h = NULL;
	return (c);
}
