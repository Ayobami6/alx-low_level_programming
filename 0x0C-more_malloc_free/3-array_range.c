#include "main.h"
#include <stdlib.h>


/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
    int *p, i;

    if (min > max)
        return (NULL);

    p = malloc((max - min + 1) * sizeof(*p));
    if (p == NULL)
        return (NULL);

    for (i = 0; min <= max; i++, min++)
        p[i] = min;

    return (p);
}
