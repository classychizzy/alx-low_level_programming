#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -function that prints the sum of 2 diagonals of a matrix
 * @a: square matrix
 * @size: size of a matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum1 += *(a + i);
	}
}
