#include "lists.h"
/**
 * free_listint - clears a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
