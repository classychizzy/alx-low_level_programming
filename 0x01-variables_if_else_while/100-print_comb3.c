#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: a program that prints all
 * possible combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int c, i;

	c = 48;

	i = 48;
	while (c < 58)
	{
		i = c + 1;
		while (i < 58)
		{
			putchar (c);
			if (c < 56 || i < 57)
			{
				putchar (44);
				putchar (32);
			}
			i++;
		}
		c++;

	}
	putchar (10);
	return (0);
}


