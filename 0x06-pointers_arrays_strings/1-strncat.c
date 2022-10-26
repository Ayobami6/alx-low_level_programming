#include "main.h"
/**
 * _strncat - concatenate two strings base on size
 * @dest: pointer arg 1
 * @src: pointer arg 2
 * @n: Size
 * Return: concatenated strings
*/


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
