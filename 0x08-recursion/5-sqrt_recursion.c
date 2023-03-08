#include "main.h"
/**
 * sqrt_rec - figures out sqr root
 * @n: number
 * @i: increment
 * Return: ans or -1
 */
int sqrt_rec(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_rec(n, i + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number
 * Return: answer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 0));
}
