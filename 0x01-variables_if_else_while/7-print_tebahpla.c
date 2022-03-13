#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: a program that prints lowercase letters in reverse
 * followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
