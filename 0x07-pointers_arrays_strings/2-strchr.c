#include "main.h"
/**
 * _strchr - a function that returns a pointer to the first occurence of a char
 * @s: memory area
 * @c: constant character
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < (*(s + i) != '\0'); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return ('\0');
}
