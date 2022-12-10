# ALX Software Engineer Cohort-10 First Trimester Course on C

## Learning C With Peers

### Command line Arguments

Alright guys let's talk about command line arguments, command line arguments is way we allow user to provide data to our program at runtime (when they are executed) instead of while the program is running. 

They are important especially when we want to control our program before execution instead of hardcoding the values in your code.

### Example 
```commandline
./4-add_practice 1 10 100 
```
The bash program name is the first argument follow by the 1, 10 and 100. We basically have 4 command line args for the above program

The `main()` function arguments are responsible for implementing the command line arguments.

### Declaring main for command line arg program
we can't use `int main(void){}` if we want to collect more data from user at the command line, instead we declare main as follows.

`int main (int argc, char *argv[]){}`, these two special arguments enable us to know what data provided at commandline and how much data they provided.

### Understanding the arguments
 >- `argc` also known as argument count: is the number of arguments passed in the command line starting from the name of the program, count starts from 1; data-type of  integer.
 >- `argv[]` also known as argument vector: Is the list ( array ) of arguments or strings provided in the command line, data type is string (array of chars i.e char *argv[]). Since `argv` is an array the first argument will be at index 0. 

 ```c
#include <stdio.h>

// type definition of our string
typedef char *string;

int main(int argc, string argv[])
{
    // This is a condition that print hello and the second arg from user
    // i.e if arg count is equal to 2 print hello and the second arg provided by the user in the command line
    if (argc == 2)
    {
        printf("hello, %s count is : %d\n", argv[1], argc);
    }

    // else print hello, world
    else
    {
        printf("hello, world\n");
    }
}

// Note the command line arg is an array of strings and the index of the first element is 0 which in this case is the name of the program
// Thus index 1 will be what the user typed as second arg in the command line.
 ```

```commandline
(base) $ ./argv 
hello, world
(base) $ ./argv Ayo
hello, Ayo arg count is: 2
``` 

> Note: `argv[0]` holds the name of the program itself and argv[1] is a pointer to the first command line argument passed by the user before executing.

When no argument is passed then `argc` is 1. When one argument is passed the argc is set to 2.

All command line arguments are passed separately as they will be divided by a space ` ` (n pressing the spacebar). If your argument happens to have a space you can put the argument inside double quotes when running your program.


```commandline
(base) $ ./argv 
hello, world
(base) $ ./argv "I am Ayo"
hello, I am Ayo arg count is: 2
``` 