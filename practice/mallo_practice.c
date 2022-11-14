#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    char *s = malloc(2 * sizeof(char));

    s[0] = 'a';
    s[1] = 'c';
  

    printf("the address of the pointer is %p\n", &s);
    printf("the address of the pointer is %p\n", &s[0]);
    printf("the address of the pointer is %p\n", &s[1]);

    free(s);
}

// int i = {6, 5};