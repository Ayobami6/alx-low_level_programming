#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *name;
    name = _strdup("Ayo");

    printf("My name is %s\n", name);
    free(name);
}

char *_strdup(char *str)
{
    char *a;
    if (str == NULL)
        return NULL;

    a = malloc(strlen(str) + 1); // allocating memory to pointer a

    if (a == NULL) // error check
        return NULL;

    for (int i = 0; i < strlen(str) + 1; i++) // iterating over the str till the null char and copying to a memory
    {
        a[i] = str[i];
    }
    return a;
}
