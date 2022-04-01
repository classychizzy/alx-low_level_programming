#include <stdio.h>
/**
 * main- a function that prints all arguments to cli
 * @argc: number of command line arguments
 * @argv: an array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf(" %s\n",  argv[i]);
	return (0);
}
