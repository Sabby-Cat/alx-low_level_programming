#include "main.c"
/**
 * rot13 - encodes a string in rot13
 * @s: sting to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char o[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

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
