#include "main.h"
/**
 * _isalpha - testes if char is a letter
 * @c: letter being tested
 * Return: 1 if it is a letter else 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
