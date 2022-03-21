#include "main.h"
/**
 *  _strlen- function to calculate the length of a string
 *  @s: identifier for string
 *  Return: 0 success
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	return (0);
}
