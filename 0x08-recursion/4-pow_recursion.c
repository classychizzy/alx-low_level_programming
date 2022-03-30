#include "main.h"
/**
 * _pow_recursion- a function that determines the exponent of a number
 * @x: the number whose exponent is to be determined
 * @y: the exponent of the number
 * Return: value of the exponent
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}

	return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
