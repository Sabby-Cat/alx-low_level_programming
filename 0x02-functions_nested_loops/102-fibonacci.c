#include <stdio.h>
/**
 * main - prints first 50 fibonacci nrs
 * Return: 0
 */
int main(void)
{
	unsigned long int i, a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		if (i == 47)
		{
			printf("%ld\n", c);
			return (0);
		}
		printf("%ld, ", c);
		a = b;
		b = c;
	}
	return (0);
}
