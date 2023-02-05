#include "hash_tables.h"

/**
 * key_value_set - set values and keys
 * @key: key to set
 * @value: value to set
 * Return: linked list node
 */
hash_node_t *key_value_set(string key, string value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - maps an element to the hash table
 * @ht: hash table to add to
 * @key: key to add
 * @value: value to store for key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		ht->array[index] = key_value_set(key, value);
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			node->value = strdup(value);
			return (1);
		}
		tmp = node;
		node = tmp->next;
	}
	tmp->next = key_value_set(key, value);
	return (1);

}
