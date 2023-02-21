#include <stdio.h>
/**
 * main - prints the sum of even fibonacci nrs
 *Return: 0
 */
int main(void)
{
	unsigned long int sum, a, b, c;

	a = 1;
	b = 2;
	c = a + b;
	sum = 2;
	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", sum);
	return (0);l
}
