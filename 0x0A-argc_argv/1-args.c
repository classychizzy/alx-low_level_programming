#include <stdio.h>
/**
 * main - a function that prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;

		printf("%d\n", argc);

	return (0);
}
