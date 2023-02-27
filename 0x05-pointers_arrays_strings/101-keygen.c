#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generates valid passwords for 101-crackme
 * Return: 0
 */
int main(void)
{
	int pass;
	char r;

	srand(time(NULL));
	pass = 0;
	while (pass <= 2645)
	{
		r = rand() % 128;
		pass += r;
		putchar(r);
	}
	putchar(2772 - sum);
	return (0);
}
