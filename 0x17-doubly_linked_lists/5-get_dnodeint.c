#include "lists.h"
/**
 * get_dnodeint_at_index - returns element at index of list
 * @head: list
 * @index: position
 * Return: element at position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == c)
		{
			return (head);
		}
		c++;
		head = head->next;
	}
	return (NULL);
}
