/*
 * File: 0-hash_table_create.c
 * Author: Chukwuoma Chizoba
 */

#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the hash table
 * Return: Null if an error occurs, else
 * a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
