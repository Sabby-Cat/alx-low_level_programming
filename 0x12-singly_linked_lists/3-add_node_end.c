#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds string to end of list
 * @head: list
 * @str: string to be dupicated
 * Return: add of new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int len = 0;

	len = strlen(str);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
