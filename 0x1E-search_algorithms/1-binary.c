#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if it is not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t loweridx = 0;
    size_t upperidx = size - 1;
    size_t mid;
    size_t i;

    if (array == NULL)
        return (-1);

    while (loweridx <= upperidx)
    {
        printf("Searching in array: ");
        for (i = loweridx; i <= upperidx; i++)
        {
            printf("%d", array[i]);
            if (i != upperidx)
                printf(", ");
        }
        printf("\n");

        mid = (loweridx + upperidx) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            loweridx = mid + 1;
        else
            upperidx = mid - 1;
    }

    return (-1);
}
