#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(list, int);

		va_end(list);
	}

	return (sum);
}
