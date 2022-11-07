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

    a = malloc(strlen(str) + 1);

    if (a == NULL)
        return NULL;

    for (int i = 0; i < strlen(str) + 1; i++)
    {
        a[i] = str[i];
    }
    return a;
}