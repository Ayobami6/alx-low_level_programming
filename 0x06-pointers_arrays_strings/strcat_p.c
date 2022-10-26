#include <stdio.h>

char *_strncat(char *dest, char *src, int n);

int main(void)
{
    char *a;
    char b[50] = "hey";
    char c[] = "hi";
    a = _strncat(b, c, 1);

    printf("%s\n,", a);
}

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
    {
        ;
    }
    for (j = 0; j < n && src[j] != '\0'; j++)
    {
        dest[i] = src[j];
        i++;
    }

    dest[i] = '\0';
    return dest;
}