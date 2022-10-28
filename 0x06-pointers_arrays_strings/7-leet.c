#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;

	char *l = "aAeEoOtTlL";
	char *d = "4433007711";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(d + j);
			}
		}
	}

	return (s);
}
