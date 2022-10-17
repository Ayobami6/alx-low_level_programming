This directory contains Alx first week C's projects

## 0x00-hello-world C Task Code Explanations


### Task 04 Puts.c

```c
#include <stdio.h> /*The header file*/
/**
 * main - Prints out the passed strings in double quotes
 * puts function is used to print out the string to
 * the stdout i.e to display the arrays of chars passed as an argument
 * for the puts function
 * Return: All good
 */
int main(void)
{
    puts("\"Programming is like building a multilingual puzzle");
    return (0);
}
```
The header file hash include stdio.h is required to to call the standard input and output function puts
mostly required for all c programs. The strings encapsulated inside the first comment block 
is used to describe the main function which includes what it does and what its returns as part of betty code style requirements.
The int in the function definition is the data type of the funtion and the main is by convention the main body of any program, think of it as a container for your c algorithms.
The void parameter passed literally means nothing that is null, meaning the algorithms inside the main 
doesn't actually return anything as a value rather it just print out the result to the stdout.
returns 0 means all went well and nothing was returned.

### 5-printf
```c
#include <stdio.h>

/**
 * main - Prints out strings
 * printf is a function that prints out strings to
 * stdout
 * Return: All good
 */

int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
```
