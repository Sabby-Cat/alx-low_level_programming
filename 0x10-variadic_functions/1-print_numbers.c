#include "variadic_functions.h"
/**
 * print_numbers - prints all args with sep between
 * @separator: char to seperate nrs
 * @n: number of ints passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nrl;

	va_start(nrl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nrl, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nrl);
}
