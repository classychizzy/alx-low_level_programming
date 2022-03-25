#include "main.h"

/**
 * leet - a function that encodes strings
 * @a: string to capitalize
 * Return: string
 */
char *leet(char *a)
{
	int i, x;
	int check[] = "aAeEoOtTlL";
	int change[] = "4433007711";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (x = 0; check[x]; x++)
			if (check[x] == *(a + i))
			{
				*(a + i) = change[x];
				break;
			}
	}

}
