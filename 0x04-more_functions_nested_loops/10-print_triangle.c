#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: height of triangle
 */

void print_triangle(int size)
{

	int s, b;

	s = 0;

	b = size;

    /*for all i up to the forth */
	for (int i = 0; i < size; i++)
	{
		s = s + 1;
		b = b - 1;

		for (int d = b; d > 0; d--)
		{
			_putchar(' ');
		}

		for (int j = 0; j < s; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
