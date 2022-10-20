#include "holberton.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
