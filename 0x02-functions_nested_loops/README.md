# ALX Software Engineer Cohort-10 First Trimester Course on C
# Learning C With Peers

## Functions and nested loops

### 2-print_alphabet_x10.c
```c
#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times
 * Return: All good
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
```
So lets talk about the nested loops with this task, so remember loops are ways in programming to repeat task until we meet our stop condition otherwise it will keep running forever.
From our code above we make use of the while loop twice, and here we don't just use it twice, we use it inside of another while loop, so we have a loop inside a loop which is loop nesting.
Now, how does this work?, well, pretty straight forward the first loop is the outer loop and the 2nd or the nested (one inside the first loop) is the inner loop, thus it works as follows the outer loop is initialized and it reads lines till it gets to the nested loop, when the nested is touched/initialed, it will complete its iteration process then move on to the outer loop to complete its iteration 1, so think about it like this if the outer has to run 4 iterations and the inner has to run 10, the for every 1 iteration of the outer inner will complete its iteration cycle to be able to move on to complete iteration of the outer loop, so now if we are to calculate the total number of iterations, what do you think the total will be?, waiting....., its 40 iterations if thats what you got you correct, meaning the inner has to run or do something 10 times in 4 places.

```txt
Idea:Print all the small letter alphabets on one line 10 times
Psuedocode
1. Initialize an incrementing int i = 0 and updating char c variable 
2. First Repeat: While i < 10
3.                      assign a to c 
4.                      Second Repeat: While c < z
                                        print c
                                        update c by assigning whats next after c to c,computer does this by 
                                        incrementing the bits by 1

```



### 9-times_table.c

```c
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


```
