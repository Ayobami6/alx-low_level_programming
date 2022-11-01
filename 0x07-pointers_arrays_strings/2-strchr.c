#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to find
 * Return: NULL if char not found, or the pointer if found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	if (*s == '\0')
		return (NULL);
}
