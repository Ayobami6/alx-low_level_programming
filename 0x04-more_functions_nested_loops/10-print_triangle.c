#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @h: height of triangle
 */

void print_triangle(int h)
{

	int s, b;

	s = 0;

	b = h;

    /*for all i up to the forth */
	for (int i = 0; i < h; i++)
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
