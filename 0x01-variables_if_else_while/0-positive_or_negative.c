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
		printf("%s\n is positive");
	}
	else if (n == 0)
	{
		printf("%s\n is zero");
	}
	else
	{
		printf("%s\n is negative");
	}
	return (0)
}
