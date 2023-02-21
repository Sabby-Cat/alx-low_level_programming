#include <stdio.h>
/**
 * main - prints first 50 fibonacci nrs
 * Return: 0
 */
int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		if (i == 47)
		{
			printf("%d\n", c);
			return (0);
		}
		printf("%d, ", c);
		a = b;
		b = c;
	}
}
