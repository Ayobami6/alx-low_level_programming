#include <stdio.h>
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void);

int main(void)
{
    times_table();
}

void times_table(void)
{
    int row = 0; /* rows */
    int col;     /* columns*/
    int n;     /* values*/

    while (row < 10) /*calculate values for each rows*/
    {
        col = 0;
        while (col < 10)
        {
            n = row * col; /*multiplies each rows by columns to get n*/

            /**
             * if n is greater than 9
             * divide n by 10 print it the result
             * and concat it with its remainder
             * example 10 divide 10 = 1 with remaider 0
             * thus result will be 1 and 0
             * which is 10
            */
            if (n > 9) 
            {
                putchar(n / 10 + '0');
                putchar(n % 10 + '0');
            }
            else if (col != 0) /*if column not the first print space*/
            {
                putchar(' ');
                putchar(n + '0');
            }
            else
            {
                putchar(n + '0');
            }
            /**
             * check if col not equal to 9
             * if True add comma and another space
            */
            if (col != 9)
            {
                putchar(',');
                putchar(' ');
            }
            col++; /*increment column*/
        } /**After the inner is done with the first row jump to the next
        * with print newline and increment the row
        */
        putchar('\n');
        row++;
    }
}
