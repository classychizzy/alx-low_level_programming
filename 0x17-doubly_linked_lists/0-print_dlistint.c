#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint -a function that prints the nodes in a list
 * @h: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%lu\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
