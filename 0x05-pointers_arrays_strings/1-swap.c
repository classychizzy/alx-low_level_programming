#include "main.h"

/**
 * swap_int- function with two pointer parameters
 * Description: a function for swapping the values
 * of two pointers
 *
 * @a: first pointer integer
 * @b: second pointer integer
 * @c: swap variable
 * Return: value
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
