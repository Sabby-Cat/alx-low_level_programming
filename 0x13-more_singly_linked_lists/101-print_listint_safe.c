#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: list
 * Return: length of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	long int sto;

	if (!head)
		exit(98);
	while (head)
	{
		if (!head)
                	exit(98);
		sto = head - head->next;
		c++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (sto > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (c);
}
