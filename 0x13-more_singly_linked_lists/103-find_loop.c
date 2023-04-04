#include "lists.h"
/**
 * find_listint_loop - finds the loop
 * @head: list
 * Return: where loop starts or NUll
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *d = head;

	if (!head)
		return (NULL);

	while (s && d && d->next)
	{
		d = d->next->next;
		s = s->next;
		if (d == s)
		{
			s = head;
			while (s != d)
			{
				s = s->next;
				d = d->next;
			}
			return (d);
		}
	}
	return (NULL);
}
