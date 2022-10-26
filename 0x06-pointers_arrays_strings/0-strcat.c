#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: pointer arg 1
 * @src: pointer arg 2
 * Return: concatenated strings
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);

}
