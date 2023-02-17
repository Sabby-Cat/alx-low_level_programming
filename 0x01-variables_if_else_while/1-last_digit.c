#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints if last nr of n is 0, >5 or <5
 *
 * Return: 0
 */
int main(void)
{
	int n, lastnr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnr = n % 10;

	if (lastnr > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnr);
	}
	else if (lastnr == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnr);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnr);
	}
	return (0);
}
