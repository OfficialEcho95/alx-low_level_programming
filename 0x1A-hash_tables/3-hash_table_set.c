#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t* hash_node(const char *key, const char *value)
{
	hash_node_t* node_t = (hash_node_t*) malloc(sizeof(hash_node_t));
	node_t->key = (char*)malloc(strlen(key) + 1);
	node_t->key = (char*)malloc(strlen(value) + 1);

	strcpy(node_t->key, key);
	strcpy(node_t->value, value);

	/**
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	if (node->key == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node_t->next = NULL;
	return (node_t);
	*/
}

/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
 
}
