#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	int i, j; /* numbers used to get the range of natural numbers*/
	/* set 1st condition to target values that are > 98*/
		if (n > 98) /* target negative values*/
		{
			for (i = n; i >= 98; i--)
			{
				if (i != 98)
					printf("%d\t", i);
				else if (i == 98)
					printf("%d\t", i);
			}
			
		}
		else if (n < 98)
		{
			for (j = n; j <= 98; j++)
			{
				if (j !=98)
					printf("%d\t", j);
				else if (j == 98)
					printf("%d\t", j);
			}
			
		}

		printf("\n");
}
