#include "main.h"

/**
 * print_sign -a function that prints signs
 * @n : type integer can be positive or negative
 *
 * Return: 1 for + values greater than 0, -1 for negative values less than 0
 * 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
