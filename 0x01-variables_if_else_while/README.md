# ALX Software Engineer Cohort-10 First Trimester Course on C
# Learning C With Peers

## Variables and conditionals in C Task Code Explanations

```c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: all good
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
```
n is a random number generated using rand() from the stdlib library subtracted from rand_max divide by 2
The conditionals start from the if, which is more like math logicals that has just two sides, True or False, so the statement n greater than 0, if True does the printf after the if statement and end run, if not, the next condition else if which is more like otherwise if, is checked, and if True runs the second printf and stop the program otherwise runs the last the printf.

* True False False = Positive, because n is greater than 0
* False True False = Negative, because n is not greater than 0 rather less than 0, so it is not 
positive or 0
* False False True = Zero, because n is not greater than zero nor less. 



### Output
```commandline
908371817 is positive
```