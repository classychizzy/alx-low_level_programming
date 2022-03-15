#include "main.h"

/**
 * main -Entry point
 * Description: a program that prints _putchar
 * followed by a new line
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
