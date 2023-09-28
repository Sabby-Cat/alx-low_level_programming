#include "main.h"
/**
 * get_endianness - checks if big or little endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *) &b;

	return (*a);
}
