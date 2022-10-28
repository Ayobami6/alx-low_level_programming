#include "main.h"

/**
 * rot13 - encode a string by rotating for 13char
 * @s: string arg
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = r13[j];
				break;
			}
		}
	}

	return (s);
}
