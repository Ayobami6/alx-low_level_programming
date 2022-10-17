# ALX Software Engineer Cohort-10 First Trimester Course on C
# Learning C With Peers

## Variables and conditionals in C Task Code Explanations

#### 0-positive_negative
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

#### 1-last_digit
```c
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: all good
 */
int main(void)
{
	int n; 
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n",
		       n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       n, m);

	return (0);
}
```
Since we now know how conditionals works, lets talk about about variables, in a simple sense, variables are like containers for storing datas or data values in programming language for us to use in our algorithms.in C declaring a variable is pretty simple but as simple other advance programming language. To declare a variable in C all we need to do is to specify the data type of the value the variable is storing use good descriptive name for the variable then use the assignment operator '=' to assing the data value to it.

From the above code we have variable m and n that stores data values of type int. the % from the code is and arithmetic operator in C called modulus, used to to get the remainder of division operation. Here the remainder of n divided 10 is stored in m.

#### Output 
```commandline
Last digit of -918876284 is -4 and is less than 6 and not 0
```

#### Variable declaration in C
```c
int h = 4;
/*Or*/
int s;
s = 3;
/*Or*/
int a, b, c;
a = 7;
b = 6;
c = 8;
```
### Loops in C
```c
#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
```
Loops are ways to repeat a particular task in programming over and over until a particular condition is met,an iteration.
how it works is that it keep doing this until this is this, so loops we will always need our until, that is a condition that must be met to stop the iteration process. 
So for the for loop above we have variable a which is set to initialize at character 'a', condition, and increment.
When run, the for loop will start running at a initialize value, checks the condition if it needs to stop or continue, if continue does the putchar, and increment a thereby updating the value, and keeps doing this until a is less than or equals to 'z'. 

For loop attributes
* a counter or an updating variable
* condition
* increment

#### Output
```commandline
abcdefghijklmnopqrstuvwxyz
```

### Other Example of for loop

```c
#include <stdio.h>

int main(void)

{

    for (int i = 0; i < 3; i++)
    {
        printf("Alx\n");
    }
}
```
This prints Alx thrice, i is the counter variable set at 0 at the init point, condition until i is not less than 3 keep printing Alx and keep increment so i can eventually stop.


