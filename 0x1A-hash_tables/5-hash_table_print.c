#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag)
				printf(", ");

			flag = 1;

			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': ", tmp->key);
				printf("'%s'", tmp->value);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
