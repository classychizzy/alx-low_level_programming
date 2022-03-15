#include "main.h"
/**
 * print_alphabet -entry point
 * Description: a program that prints all characters in lower case
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
