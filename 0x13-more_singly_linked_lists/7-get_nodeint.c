#include "lists.h"
/**
 * get_nodeint_at_index - gets a certain node
 * @head: list
 * @index: position
 * Return: list null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	return (tmp);
}
