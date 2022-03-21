#include "main.h"
/**
 * print_rev- function used to reverse string
 * Description: a program used to reverse a string
 * @s: a string
 *
 */
void print_rev(char *s)
{
	int i;

	i = 0; /*get the length of the string */
	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);/* this prints each letter then trims it*/
	}

	_putchar('\n'); /*prints the new line as a char*/
}
