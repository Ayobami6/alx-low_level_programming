#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d", TABLESIZE);
    return (0);
}
