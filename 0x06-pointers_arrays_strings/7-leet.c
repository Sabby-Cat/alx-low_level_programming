#include "main.c"
/**
 * leet - encode a string in 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char o[] = "aAeEoOtTlL";
	char r[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; o[j] != '\0'; j++)
		{
			if (s[i] == o[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
