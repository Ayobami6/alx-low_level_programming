#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index
 * Return: 1 if sucessful -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow;

	if (index > 64)
		return (-1);

	for (pow = 1; index > 0; index--, pow *= 2)
		;
	*n += pow;

	return (1);
}
