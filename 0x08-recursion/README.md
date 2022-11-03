# ALX Software Engineer Cohort-10 First Trimester Course on C

## Learning C With Peers

## Recursion 
Simply put recursion or recursive function in C is a self calling function, i.e a function that calls itself as part of it definition.
So the way the function operates is called call stack, and the way the call stack works is as follows:
When a function is called, a big chunk of memory is created for the function to do its work, thus when a function is called a stack frame is created for that function, therefore call stack is basically creating memory frames for each function calls. 
Now that we have basic idea how call stacks works lets talk about how the recursive function actually works, but before that lets talk about how to define a recursive function in C, to define the recursive we need to have 3 things in the function, more like to do, two of which are base case(s) and recursive case, and arg action i.e if you n as an argument what to do to n to eventually reach the stop condition which is your base case.
The base condition is the stop condition, you don't want your function to call itself forever, do you? because that will lead to stack overflow or program crash.Thats why the base case is required.
The second case, recursive case this is where the function calls itself. 
Ok enough of that!, lets get to coding

```c
#include <stdio.h>

int fact(int n);

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);

    printf("%i\n", fact(n));
}

// Recursive function definition 
int fact(int n)
{
    if (n == 1) /*base case for recursive function, more like a condition to stop the infinite loop*/
        return 1;
    else
        return n * fact(n - 1); /* recursive case, to keep reducing n*/
}
```
From the code above, we have the main function and factorial function `fact` which is a recursive function that calculates the factorial of an integer, in mathematics factorial is a function that multiplies a number by all below it till 1. Factorial is denoted by !.
mathematical expression of factorial function is n! = n * (n - 1)!, thus if n is 4, 4! = 4 * 3! and 3! = 3 * 2! and 2! = 2 * 1! and 1! is 1, therefore 4! = 4 * 3 * 2 * 1 = 24.
Now, how does C does this!, simple but not that simple, remember the call stack, the function call, function call, function call... So the `fact` function calls itself n times by reducing n arg by 1 for each call until the base case condition is met.

Therefore, here is how the above code works, if n = 4, the main function is called first on the stack which is technically the call stack 1 i.e call frame 1, inside the main, n is an arg passed to the function as user input to use as an argument for fact function which is 4, then the fact function is called on different frames until the base condition is met pending the final instruction in the main function which is to print the result of fact 4, so since fact function is a recursive function, `fact(4)` gets it frame which is frame 2 and does its work which is 4 * fact(3), fact funtion is called again on frame 3 taking 3 as its arg this time, which will return 3 * fact(2), and call again on frame 4 taking 2 as it arg, to return 2 * fact(1), now since the n is equal to 1 the terminate condition is true and the function calls and return 1, so since fact(1) returns 1, fact (2)  will be 2 * 1 which is 2, so fact(2) = 2, then back to fact(3), since fact(2) = 2 fact(3) will be 3* 2 = 6 and fact(4) will be 4 * fact(3), which 4 * 6 = 24.
So after the call stack is done, the execution of the function is next, think of this as a LIFO queuing system process i.e last in first out stack queue, in which the earlier function is waiting for the later function to complete it function action and disappear. the most recent function gets executed first, then pass it result to the next recent, till its get back to back to main which is the first frame. 
Most recent frame = active frame.
This is an example of a non tail recursive function because it is not the last program instruction in the function definition, the last instruction is return. 


Example of tail recursive function

```c
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
```
Here the recursive case is the last program instruction, so this wont actually behave in the same manner as the non tail recursive function.

