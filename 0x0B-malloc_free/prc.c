#include <stdio.h>

int main(void)
{
    char *string;
    int **a;

    printf("size of array is %li, size of pointer is %li\n, size of double pointer %li, size of long %li", sizeof(string), sizeof(char), sizeof(a), sizeof(long));
}