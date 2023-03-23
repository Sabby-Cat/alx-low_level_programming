#include "variadic_functions.h"
/**
 * sum_them_all - adds all given args
 * @n: number of arg
 * Return: answer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list nrl;

	va_start(nrl, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nrl, int);
	}
	va_end(nrl);
	return (sum);
}
