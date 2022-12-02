#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int tmp;

	if (index > 64)
		return (-1);
	tmp = index;
	for (i = 1; tmp > 0; i *= 2, tmp--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
