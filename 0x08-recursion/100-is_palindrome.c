#include "main.h"
/**
 * check - checks if is palindrome
 * @s: string
 * @i: increment up
 * @len: increment down
 * Return: 1 if palindrome, else 0
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
/**
 * is_palindrome - checks if nr is a palindrome
 * @s: string being checked
 * Return: 1 if is else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - finds string length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
