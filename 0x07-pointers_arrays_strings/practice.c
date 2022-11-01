#include <stdio.h>


int main(void)
{
    int *p;
    int **pp;

    printf("%li\n", sizeof(p));
    printf("%li\n", sizeof(pp));
    printf("%li\n", sizeof(*p));
    printf("%li\n", sizeof(**pp));

}