#include "main.h"

/**
 * swap_int- function with two pointer parameters
 * Description: a function for swapping the values
 * of two pointers
 *
 * @a: first pointer integer
 * @b: second pointer integer
 * Return: value
 *
 */
void swap_int(int *a, int *b)
{
	int c; /*swap variable*/

	c = *a;
	*a = *b;
	*b = c;
}
