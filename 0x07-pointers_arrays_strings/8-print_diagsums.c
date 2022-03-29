#include "main.h"
/**
 * print_diagsums -function that prints the sum of 2 diagonals of a matrix
 * @a: square matrix
 * @size: size of a matrix
 */
void print_diagsums(int *a, int size)
{
	int lfrg = 0, rglf = size - 1;
	int valuelfrg = 0, valuerglf = 0;
	int *p = a;

	for (; lfrg <= size * size; lfrg += (size + 1), rglf += (size - 1))
	{
		valuelfrg += *(p + lfrg);
		valuerglf += *(p + rglf);
	}
