#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n if negative or otherwise
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
