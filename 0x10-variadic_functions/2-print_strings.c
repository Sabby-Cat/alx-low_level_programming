#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by new line
 * @separator: separates strings
 * @n: nr of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sto;
	va_list stl;

	va_start(stl, n);
	for (i = 0; i < n; i++)
	{
		sto = va_arg(stl, char *);
		if (sto == NULL)
			sto = "(nil)";
		printf("%s", sto);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stl);
}
