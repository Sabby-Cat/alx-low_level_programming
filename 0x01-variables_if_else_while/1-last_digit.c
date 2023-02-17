#include <stdio.h>
#include <time.h>
/**
 * main - prints if last nr of n is 0, >5 or <5
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastnr = n % 10;

	if (lastnr > 5)
	{
		printf("Last digit of %d\n", n, "is %d\n", lastnr, "and is greater than 5");
	}
	else if (lastnr == 0)
	{
		printf("Last digit of %d\n", n, "is %d\n", lastnr, "and is 0");
	}
	else
	{
		printf("Last digit of %d\n", n, "is %d\n", lastnr,
				"and is less than 6 and not 0");
	}
	return (0);
}
