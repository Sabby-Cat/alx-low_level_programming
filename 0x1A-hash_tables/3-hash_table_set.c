#include "hash_tables.h"
/**
 * hash_table_set - sets value in hash table
 * @ht:  hash table to edit
 * @key: key to find
 * @value: value to change
 * Return: 0 or 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cp;
	unsigned long int ind, i;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	cp = strdup(value);
	if (cp == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp;
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
