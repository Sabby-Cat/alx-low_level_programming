#include <stdio.h>
/**
 * main - finds and prints largest prime factor
 * Return: 0
 */
int main(void)
{
	long int i, n;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
