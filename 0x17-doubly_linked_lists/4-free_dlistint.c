#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - a function that frees a list
 * @head: head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
