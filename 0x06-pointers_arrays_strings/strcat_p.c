#include <stdio.h>

char *_strncpy(char *dest, char *src, int n);

int main(void)
{
    char *a;
    char b[50] = "hey";
    char c[] = "peace";
    a = _strncpy(b, c, 1);

    printf("%s\n,", a);
}

char *_strncpy(char *dest, char *src, int n)
{
    int j;

    for (j = 0; j < n && src[j] != '\0'; j++)
    {
        dest[j] = src[j];
    }
    for (; j < n; j++)
        dest[j] = '\0';

    return dest;
}