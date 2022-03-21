#include "main.h"
/**
 * puts2- function that prints every character of a string
 * starting with a new line
 * @str: char pointer
 * return: void
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar(10);
}
