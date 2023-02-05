#include "hash_tables.h"


/**
 * hash_table_get - gets the value of a key from the hash table
 * @ht: hastable
 * @key: the key to get the value
 * Return: The value ofthe key if found else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int = key_index(key);
	hash_node_t *node = ht->array[index];

	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->nexr;
	}
	return (NULL);
}
