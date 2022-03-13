#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description:program that prints all single digit numbers
 * of base 10 starting from a new line, must not include
 * any type of char except the putchar
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');
	return (0);
}
