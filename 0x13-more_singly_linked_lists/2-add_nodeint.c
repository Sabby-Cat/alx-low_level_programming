#include "lists.h"
/**
 * add_nodeint - add new node at begining of list
 * @head: list
 * @n: node info
 * Return: address of new elemernt or Null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
