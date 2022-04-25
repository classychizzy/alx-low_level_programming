#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint- a function that prints all members of a linked list
 * @h:the head of the node
 * Return: members of the list
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("list is empty");
	}
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
