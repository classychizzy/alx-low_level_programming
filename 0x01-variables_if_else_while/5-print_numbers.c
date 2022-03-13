#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 *
 * Description:program that prints single digits of numbers in
 * base 10 followed by a new line
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}

	putchar('\n');
	return (0);
}

