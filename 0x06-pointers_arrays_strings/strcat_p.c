#include <stdio.h>

int _strcmp(char *s1, char *s2);

int main(void)
{
    int a;
    char b[50] = "hey";
    char c[] = "peace";
    a = _strcmp(b, c);

    printf("%i\n,", a);
}

int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[2]);
            
    }
    return (0);
}