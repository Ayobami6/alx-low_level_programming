#include <stdio.h>

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n);

int main(void)
{
    print_times_table(13);
}

void print_times_table(int n)
{
    int row = 0, col, val;

    if (n > 15 || n < 0)
        return;
    while (row <= n)
    {
        for (col = 0; col <= n; col++)
        {
            val = row * col;
            if (val > 99)
            {
                putchar(val / 100 + '0');
                putchar(val / 10 % 10 + '0');
                putchar(val % 10 + '0');
            }
            else if (val > 9)
            {
                putchar(' ');
                putchar(val / 10 + '0');
                putchar(val % 10 + '0');
            }
            else if (col != 0)
            {
                putchar(' ');
                putchar(' ');
                putchar(val + '0');
            }
            else
                putchar(val + '0');

            if (col != n)
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
        row++;
    }
}
