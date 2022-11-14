#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *a;
    unsigned int i;

    if (size == 0)
        return (NULL);

    a = malloc(size * sizeof(char));

    // Safety Check
    if (a == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        a[i] = c;
    }
    return (a);
}
