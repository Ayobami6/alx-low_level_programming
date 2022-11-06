# ALX Software Engineer Cohort-10 First Trimester Course on C

## Learning C With Peers

### Command line Arguments

Alright guys let's talk about command line arguments, command line arguments is way we allow user to provide data to our program 
at runtime instead of while the program is running. 
### Example 
```commandline
./4-add_practice 1 10 100 
```
The bash program name is the first arg follow by the 1, 10 and 100, so we basically have 4 command line args for the above program

### Declaring main for command line arg program
we can't use `int main(void){}` if we want to collect more data from user at the command line, instead we declare main as follows
`int main (int argc, char *argv[]){}`, these two special args enables us to know what data provided at commandline and how much data they provided.

### Understanding the arguments
 >- `argc` also known as argument count: is the count of arguments provided in the commandline starting from the name of the program, count starts from 1; data type integer
 >- `argv[]` also known as argument vector: is the list or array of arguments or strings provided in the command line, data type is string or array of chars. Since argv is an array the first argument will be at index 0.

 ```c
#include <stdio.h>

typedef char *string;

int main(int argc, string argv[])
{
    // this is a condition that print hello and the second arg from user
    // i.e if arg count is equal to 2 print hello and the second arg provided by the user in the command line
    if (argc == 2)
    {
        printf("hello, %s count is : %d\n", argv[1], argc);
    }

    // else just print hello, world
    else
    {
        printf("hello, world\n");
    }
}

// Note the command line arg is an array of strings and the index of the first element is 0 which in this case is the name of the program
// Thus index 1 will be what the user typed as second arg in the command line.
 ```

```commandline
(base) ayo@hp-HP-Pavilion-g6-Notebook-PC:~/Desktop/Study/Practice$ ./argv 
hello, world
(base) ayo@hp-HP-Pavilion-g6-Notebook-PC:~/Desktop/Study/Practice$ ./argv Ayo
hello, Ayo arg count is: 2
``` 
