#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int row = 0; /* rows */
	int col;     /* columns*/
	int n;     /* values*/

	while (row < 10) /*calculate values for each rows*/
	{
		col = 0;

		while (col < 10)
		{
			n = row * col; /*multiplies each rows by columns to get n*/

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (col != 0) /*if column not the first print space*/
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++; /*increment column*/
		}
		_putchar('\n');
		row++;
	}
}
