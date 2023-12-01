#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nxt, *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				nxt = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = nxt;
			}
		}
	}
	free(head->array);
	free(head);
}
