#include "main.h"

/**
 * print_alphabet_x10 - main entry point
 * Description: prints 10 times the alphabets in lower case
 * Return Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int w, q;

	for (w = 0; w < 10; w++)
	{
		for (q = 0; q < 26; q++)
		{
			_putchar(c + q);
		}
		_putchar(10);
	}
}

