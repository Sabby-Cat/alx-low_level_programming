#include "hash_tables.h"
/**
 * hash_table_print - print elements of hash table
 * @ht: hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
short int c = 0;

if (ht == NULL)
	return;
putchar('{');
for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	while (node != NULL)
	{
		if (c)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->next;
		if (c == 0)
			c = 1;
	}
}
printf("}\n");
}
