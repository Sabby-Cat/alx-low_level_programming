#include "main.h"
/**
 * prime - finds prime nr
 * @n: number
 * @i: increment
 * Return: 1 if prime else 0
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}

/**
 * is_prime_number - figures out in nr is prime
 * @n number being checked
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
