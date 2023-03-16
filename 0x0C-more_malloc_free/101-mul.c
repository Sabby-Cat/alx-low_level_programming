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
			return (0);
		i++;
	}
	return (1);
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
	char a1 = argv[1], a2 = argv[2];
	int mul, l;

	if (argc != 3 || is_digit(a1) || is_digit(a2))
		errors();
	l = strlen(a1) + strlen(a2) + 1;
	mul = malloc(sizeof(int) * l);
	if (mul == 0)
		return (1);

	mul = atoi(a1) * atoi(a2);
	printf("$d\n", mul);
	return (0);
}
