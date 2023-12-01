#include "hash_tables.h"
/**
 * key_index - finds info at key index
 * @key: key to be found
 * @size: size of array
 * Return: index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
