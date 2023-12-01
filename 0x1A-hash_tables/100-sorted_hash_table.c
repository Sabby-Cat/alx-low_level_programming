#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the table
 * Return: returns created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int ind;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (ind = 0; ind < size; ind++)
		ht->array[ind] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - sets element at key
 * @ht: hash table
 * @key: position
 * @value: value to put in key
 * Return: 0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *nxt;
	char *cp;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cp = strdup(value);
	if (cp == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	nxt = ht->shead;
	while (nxt)
	{
		if (strcmp(nxt->key, key) == 0)
		{
			free(nxt->value);
			nxt->value = cp;
			return (1);
		}
		nxt = nxt->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(cp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(cp);
		free(new);
		return (0);
	}
	new->value = cp;
	new->next = ht->array[ind];
	ht->array[ind] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		nxt = ht->shead;
		while (nxt->snext != NULL && strcmp(nxt->snext->key, key) < 0)
			nxt = nxt->snext;
		new->sprev = nxt;
		new->snext = nxt->snext;
		if (nxt->snext == NULL)
			ht->stail = new;
		else
			nxt->snext->sprev = new;
		nxt->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - get element at key in ht
 * @ht: hash table
 * @key: position
 * Return: element info
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;
	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print ravese table
 * @ht: hast table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete sorted table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nxt, *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		nxt = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = nxt;
	}
	free(head->array);
	free(head);
}
