#include "main.h"
/**
 * is_prime_number- function that checks for a prime number
 * @n: number to be checked
 * Return: 1 for prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 2 || n % 2 == 0)
		return (1);
	else
		return (0);
	n = n + 1;
	return (is_prime_number(n));
}
