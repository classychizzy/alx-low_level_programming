#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	
	new->n = n;
	new->next = 0;
	temp = *head;

	if (temp == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	while (temp->next != NULL)
	{
		if (*head == NULL)
		{
			*head = temp = new;
		}
		else
		{
			temp->next = new;
			temp = new;
		}

	}

	return (temp);

}
