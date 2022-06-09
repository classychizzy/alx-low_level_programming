#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index -a function that returns the nth index of a list
 * @head: head pointer
 * @index: the index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (present != NULL)
	{
		if (count == index)
			break;
		count++;
		present = present->next;
	}
	return (present);
}
