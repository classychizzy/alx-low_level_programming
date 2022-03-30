#include "main.h"
/**
 * _print_rev_recursion- function that prints the reverse of a string
 * @s: string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
