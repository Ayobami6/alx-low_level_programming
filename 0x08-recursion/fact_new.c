#include <stdio.h>

int factorial(int n)
{
    int fact = 0;
    if (n < 0)
        return -1;
    else if (n < 2)
        return (n);
    else
    {
        fact = n * factorial(n - 1);
        return (fact);
    }
}

int main(void)
{
    int a;
    a = factorial(-45);
    printf("%d\n", a);
}