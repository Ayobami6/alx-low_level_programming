#include <stdio.h>

char *_strcat(char *dest, char *src);

int main(void)
{
    char *a;
    char b[50] = "hey";
    char c[] = "hi";
    a = _strcat(b, c);

    printf("%s\n,", a);
}

char *_strcat(char *dest, char *src)
{
    int i, j;
    for (i = 0; dest[i] != '\0'; i++)
    {
        ;
    }
    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i] = src[j];
        i++;
    }

    dest[i] = '\0';
    return dest;
}