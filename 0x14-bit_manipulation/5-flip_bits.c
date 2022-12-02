#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int count;

	xor = n ^ m;
	count = 0;

	while (xor)
	{
		count++;
		xor &= (xor - 1);
	}

	return (count);
}
