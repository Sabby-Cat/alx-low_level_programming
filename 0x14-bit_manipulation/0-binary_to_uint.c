#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: binary
 * Return: int answer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ret = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		ret = 2 * ret + (b[i] - '0');
	}
	return (ret);
}
