#include <stdio.h>
/**
 * main - calculate sum of all multiples of 3
 * and 5 below 1024
 *
 */
void main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d/n", sum);
}
