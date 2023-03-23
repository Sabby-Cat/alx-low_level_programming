#include "variadic_functions.h"
/**
 * print_all - prints all args
 * @format: list of formats for args
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sto, *sep = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
					sto = va_arg(ls, char *);
					if (sto == NULL)
						sto = "(nil)";
					printf("%s%s", sep, sto);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ls);
}
