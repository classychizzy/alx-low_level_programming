#include "main.h"
/**
 * rev_string- a function that reverses a string
 * Description: a function that prints a reverse string
 * @s: character representing string
 *
 */
void rev_string(char *s)
{
	int i; /*variable used for looping*/
	int j;/*variable used to trim the string */
	int len;/* variable that stores string length */
	int temp;/*variable used to temporarily store the value of string*/

	while (s[i] != '\0')
	{
		i++; /*pass each member of string to stdout*/
	}

	j = 0;
	len = i; /* i is now the position of each string member*/
	i--;

	while (j < len/2)
	{
		temp = s[j};/* this helps to interchange the value for j and i*/
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
}
