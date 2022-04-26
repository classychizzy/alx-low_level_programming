#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef _LISTS_H
#define _LISTS_H
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 **/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
