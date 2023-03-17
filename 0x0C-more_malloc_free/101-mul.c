#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - checks if each char is a digit
 * @s: array being checked
 * Return: 0 if *s is a nr else 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * errors - prints error
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - prints 2 nrs multiplied together
 * @argc: nr of arguments passed
 * @argv: vector
 * Return: answer
 */
int main(int argc, char *argv[])
{
	char *a1 = argv[1], *a2 = argv[2];
	int *ret, i, l, l1, l2, d1, d2, sto, b = 0;

	if (argc != 3 || is_digit(a1) || is_digit(a2))
		errors();
	l1 = strlen(a1), l2 = strlen(a2);
	l = l1 + l2 + 1;
	ret = malloc(sizeof(int) * l);
	if (!ret)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		ret[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = a1[l1] - '0';
		sto = 0;
		for (l2 = strlen(a2) - 1; l2 >= 0; l2--)
		{
			d2 = a2[l2] - '0';
			sto += ret[l1 + l2 + 1] + (d1 * d2);
			ret[l1 + l2 + 1] = sto % 10;
			sto /= 10;
		}
		if (sto > 0)
			ret[l1 + l2 + 1] += sto;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (ret[i])
			b = 1;
		if (b)
			_putchar(ret[i] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(ret);
	return (0);
}
