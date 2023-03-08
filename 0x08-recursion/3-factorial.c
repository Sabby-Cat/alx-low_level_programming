#include "main.h"
/**
 * factorial - factorises a number
 * @n: number to be factorised
 * Return: factorial, 1 or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
