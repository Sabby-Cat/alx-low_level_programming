#include "lists.h"
/**
 * pop_listint - delte head node
 * @head: list
 * Return: data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int c;

	if (!*head || !head)
		return (0);

	c = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (c);

}
