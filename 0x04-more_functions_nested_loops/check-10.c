#include <stdio.h>

void print_triangle(int h);

int main(void)
{
    print_triangle(2);
}

void print_triangle(int h)
{

    int s, b;
    s = 0;
    b = h;

    // for all i up to the forth
    for (int i = 0; i < h; i++)
    {
        s = s + 1;
        b = b - 1;

        for (int d = b; d > 0; d--)
        {
            putchar(' ');
        }

        for (int j = 0; j < s; j++)
        {
            putchar('#');
        }

        putchar('\n');
    }
}
