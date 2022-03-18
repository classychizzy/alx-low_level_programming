#include <stdio.h>

/**
 * positive_or_negative -Entry point
 * @i: integer
 * Return: void (success)
 *
 */
void positive_or_negative(int i)
{
	 i = 0;

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
