#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint_t - a function that prints the nodes in a list
 * @h: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%lu\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
