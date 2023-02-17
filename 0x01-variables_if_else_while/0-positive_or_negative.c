#include <stdio.h>
#include <time.h>
/**
 * main - prints whether variable n is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d\n" n, "is positive");
	}
	else if (n == 0)
	{
		printf("%d\n" n, "is zero");
	}
	else
	{
		printf("%d\n" n, "is negative");
	}
	return (0)
}
