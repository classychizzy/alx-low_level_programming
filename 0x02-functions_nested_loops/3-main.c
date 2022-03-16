#include "main.h"

/**
 * main -Entry point
 * Description: a function that checks for lowercase letters
 * Return: always 0
 */
int main(void)
{
	int r;

	r = _islower('H');

	_putchar(r + '0');

	r = _islower(108);

	_putchar(r + '0');

	_putchar('\n');

	return (0);
}

