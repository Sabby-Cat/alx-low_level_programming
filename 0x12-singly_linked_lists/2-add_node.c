#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at start of list
 * @head: list
 * @str: string to be duplicated
 * Return: add of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	len = strlen(str);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
