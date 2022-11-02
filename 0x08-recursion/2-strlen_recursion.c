#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: a, variable for the string length
 */

int _strlen_recursion(char *s)
{
	int a;

	a = 0;
	if (*s == '\0')
		return (0);

	a = 1 +  _strlen_recursion(s + 1);

	return (a);
}
