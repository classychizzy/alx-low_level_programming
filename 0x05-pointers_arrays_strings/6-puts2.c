#include "main.h"
/**
 * puts2- function that prints every character of a string
 * starting with a new line
 * @str: char pointer
 * return: void
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
