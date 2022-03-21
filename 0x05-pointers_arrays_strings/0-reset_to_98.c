#include "main.h"
/**
 * reset_to_98-main function that takes a pointer as parameter
 * Description: updating the value of *n to 98
 * @n: the pointer
 *
 */
void reset_to_98(int *n)
{
	int m = 98;
	*n = &m;

	_putchar("the value of 'n' is: %d\n", *n);
}
