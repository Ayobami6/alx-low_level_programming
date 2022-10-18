#include "holberton.h"
/**
 * print_sign - Print the sign of a number
 * @n: type int integer ranges between -2b and +2b.
 * Return: 1 if +, 0 if 0, and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
