#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value pairs from ht
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    if (!ht)
        return;

    int printed = 0;
    printf("{");
    for (unsigned long int i = 0; i < ht->size; i++)
    {
        hash_node_t *bucket = ht->array[i];
        while (bucket)
        {
            if (printed)
                printf(", ");
            printf("'%s': '%s'", bucket->key, bucket->value);
            printed = 1;
            bucket = bucket->next;
        }
    }
    printf("}\n");
}

