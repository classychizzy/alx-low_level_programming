#include "main.h"
/**
 * puts2- function that prints every character of a string
 * starting with a new line
 * @str: char pointer
 * return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + 1));
		}
		i++;
	}

	_putchar('\n');
}
