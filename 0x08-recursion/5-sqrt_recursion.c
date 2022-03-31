#include "main.h"
/**
 * square_root - find the natural square root
 * @i: number
 * @j: incrementor
 * Return: the number found
 */
int square_root(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}
/**
 *  _sqrt_recursion - function that returns the square root of a natural number
 *  @n: number
 *  Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(n, a));
}
