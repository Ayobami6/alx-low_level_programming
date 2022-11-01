#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (n; n > 0; n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
