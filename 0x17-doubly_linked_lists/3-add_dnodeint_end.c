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

	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (NULL);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
	last->next = new_node;
		new_node->prev = last;
	}
	return (*head);
}
