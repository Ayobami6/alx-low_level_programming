#include "search_algos.h"

/**
 * linear_search - searchs for a value in a list
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 * Return: index if sucessful, -1 or else
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
