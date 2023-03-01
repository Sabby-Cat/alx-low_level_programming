#include "main.h"
/**
 * cap_string - capatalises all words after listed word seperators
 * @s: string to be capatalised
 * Return: capatalised string
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = {' ', '\t', '\n', ',', ';',
	       '.', '!', '\?', '\"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; c[j]; j++)
		{
			if (c[j] == s[i] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
