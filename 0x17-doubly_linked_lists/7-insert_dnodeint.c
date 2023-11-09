#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts n at idx
 * @h: list
 * @idx: Position
 * @n: info
 * Return: New node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *old, *new = malloc(sizeof(dlistint_t));
	unsigned int c;

	if (h == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	old = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (c = 0; old; c++)
	{
		if (old->next == NULL && c == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == c)
		{
			new->next = old->next;
			new->prev = old;
			old->next->prev = new;
			old->next = new;
			return (new);
		}
		old = old->next;
	}
	free(new);
	return (NULL);
}
