#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table to print
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{}\n");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("{'%s': '%s", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
