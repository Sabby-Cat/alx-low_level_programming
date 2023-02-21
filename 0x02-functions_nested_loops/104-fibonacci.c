#include <stdio.h>
/**
 * main - prints first 98 fibonacci nrs
 * Return: 0
 */
int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 0; i < 96; i++)
	{
		c = a + b;
		if (i == 95)
		{
			printf("%d\n", c);
			return (0);
		}
		printf("%d, ", c);
		a = b;
		b = c;
	}
	return (0);
}
