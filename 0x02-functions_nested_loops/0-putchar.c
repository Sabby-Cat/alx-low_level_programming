#include "main.h"

/**
 * main - prints _putchar using _putchar function
 *
 * Return: 0
 */
int main(void)
{
	char cha[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(cha[i]);
	}
	_putchar('\n');
	return (0);

}
