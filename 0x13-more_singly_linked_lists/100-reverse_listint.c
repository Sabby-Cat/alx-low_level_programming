#include "lists.h"
/**
 * reverse_listint - reverses given list
 * @head: list
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *b = NULL;
	listint_t *e = NULL;

	while (*head)
	{
		e = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = e;
	}
	*head = b;
	return (*head);
}
