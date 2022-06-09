#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - a function that adds a node at the end of a list
 *  @head: pointer to the head node
 *  @n: value stored in the node
 *  Return: Address of the new node on success, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (last != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
	last->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = last;
	return (new_node);
}
