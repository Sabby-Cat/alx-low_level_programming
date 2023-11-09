#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: list
 * @index: positin
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int c;

	h1 = *head;
	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	for (c = 0; h1 != NULL; c++)
	{
		if (c == index)
		{
			if (c == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
	}
	return (-1);
}
