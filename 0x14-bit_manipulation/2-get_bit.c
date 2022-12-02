#include "main.h"

/**
 * get_bit - get a bit value at a given index
 * @n: number to get bit from
 * @index: index starting from 0, of the bit we want to get
 * Return: value of the bit a the index or -1 if index > 64
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);

	tmp = n >> index;

	return (tmp & 1);
}
