#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - a function that adds a node at the beginning of a list
 * @head: head pointer
 * @n: value stored in a node
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (*head);
}

