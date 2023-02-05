#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int key_val;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, key_val = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		if (key_val == 1)
			printf(", ");
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
		key_val = 1;
	}
	printf("}\n");
}
