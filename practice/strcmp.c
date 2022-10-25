#include <stdio.h>

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2);

int main(void)
{

    if (_strcmp("he", "hello") == 0)
        printf("Same\n");
    else
        printf("Different\n");
}

int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            printf("s1 is %i, s2 is %i\n", s1[i], s2[i]);
            return (s1[i] - s2[i]);
        }
    }
    return (0);
}
