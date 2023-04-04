#include "lists.h"
/**
 * sum_listint - gets the sum of all the data
 * @head: list
 * Return: answer
 */
int sum_listint(listint_t *head)
{
	int ret = 0;

	while (head)
	{
		ret += head->n;
		head = head->next;
	}
	return (ret);
}
