#include "main.h"
/**
 * _isdigit - checks if int is digit
 * @c: int being checked
 * Return: 1 if dig else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
