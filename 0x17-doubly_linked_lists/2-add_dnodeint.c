#include "lists.h"
/**
  * add_dnodeint - adds a new item at beging of list
  * @head: list
  * @n: info
  * Return: updated list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	tmp = *head;
	new->next = tmp;
	tmp->prev = new;
	*head = new;
	return (new);
}
