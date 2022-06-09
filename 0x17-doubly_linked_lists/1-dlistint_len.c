#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * dlistint_len -function that returns the number of elements in a list
 * @h: head pointer
 * Return: number of nodes present
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
