#include "main.h"
/**
 * _isupper - checks if a char is upper case
 * @c: char being checked
 * Return: 1 if upper0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}

