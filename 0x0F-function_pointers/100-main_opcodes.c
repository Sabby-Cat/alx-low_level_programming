#include <stdio.h>
#include <stdlib.h>
/**
 * main -
 * @argc: count
 * @argv: vector
 * Return:
 */
int main(int argc, char *argv[])
{
	int n, i;
	char *sto;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argc[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	sto = (char *)main;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", sto[i]);
			break;
		}
		printf("%02hhx", sto[i]);
	}
	return (0);
}
