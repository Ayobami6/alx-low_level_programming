#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big, or 1 if small
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
