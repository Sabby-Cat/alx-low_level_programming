#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 nrs
 * @argc: count
 * @argv: vector
 * Return: 1 = fail 0 = pass
 */
int main(int argc, char *argv[])
{
	int ans, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ans = n1 * n2;

	printf("%d\n", ans);

	return (0);
}
