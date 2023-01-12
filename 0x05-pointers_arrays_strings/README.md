# ALX Software Engineer Cohort-10 First Trimester Course on C
# Learning C With Peers

## Pointers 

```c
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    /*& address of operator in C*/ // *p signifies a pointer because of
                                   // the asterick before the letter
    printf("%p\n", p);             // %p -> pointers placeholders in c
    printf("%i\n", *p);            // going into the pointers which means deference operator
}

// Pointers is a variable that stores the address or location in memory of some values (using & operator)
// * and variable to store a pointer number
```

Alright lets use this to talk about pointers before moving forward to the tasks,

A pointer in a simple sense is a variable that stores the address of a value in computer memory 'RAM', to store the address we need 
to get the address using the ampersand operator & which is address of operator, the pointer variable is declared using * and name of the variable after the data type.

The address of value output is always in hexadecimal i.e 0x02ab457f of sort, hexadecimals are numbers in base 16 unlike decimals in base 10, it ranges from 0 - F, i.e 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F which is basically 0 through 15. The highest count for hex is FF which is 255 in decimal and 11111111 in binary.

Now lets use the above code to explain pointers and deferencing.

Inside the main function we declared the two variables `n` and `p` in the static, though pointer can also be stored on the heap, buts lets not go there now, we will talk about it later.

`n` is a normal variable storing the value 50 and `p` with the asterick (*) before which makes a pointer variable stores the address of `n` in memory which was obtained using ampersand operator. Think of it like `n` is a box on a table that has something in it and that something is a value or in this case an `int` value of 50, so the content of the box is an `int` value 50 and the location is on the table, thus from this where do you think the box 'n' is located? in lets say a room..... answer is on the table which is the address, and the table can only be stored inside a pointer if you intend to use it, So the room is the RAM and the table is the byte(s) space address in the memory and this address is stored in a pointer.

Moreso, pointers points to an address.

To print out the pointer with the print function we use the %p as the format code in qoute, then pass the pointer variable as the second or last argument without the asterick this time or every other time when want to just get the address after the initial declaration. 

To get the content in the address the pointer variable is storing we use the deferencing operator which is adding * to the pointer variable, which means go to that address you are storing and get me whatever is inside, so if table was the address again go to the table and grap whats there, that is the box. 

### Output
```commandline
0x7ffdb86f7c9c (address)
50 (content of the address)
```

### 0-reset_to_98.c

```c
#include "main.h"

/**
 * reset_to_98 - go into pointer address and change the value.
 * @n: int type pointer
 */

void reset_to_98(int *n)
{
	*n = 98; /* using the dereferencing operator, go to n and update n to be 98 instead of init val*/
}
```


### 1-swap.c 

```c
#include <stdio.h>

void swap_int(int *a, int *b); /*now using pointers, address and dereference operator we can swap*/

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);

    swap_int(&x, &y); /*geting the address of the int arguments*/

    printf("x is %i, y is %i\n", x, y);
}

void swap_int(int *a, int *b)
{

    int tmp = *a; /*go into a and get value and store to temp*/
    *a = *b;      /*go into b and get value then store into address of a*/
    *b = tmp;     /* store the value of tmp into the address of b*/
}
```
Use the comments to understand the code!

### Output
```commandline
x is 1, y is 2 (before swap function call)
x is 2, y is 1 (After swap function call)
```

### 2-strlen.c

```c
#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++) /*iterate over all the character until you get to the null character*/
		;   /*do nothing*/

	return (c); /*when done just return the last value of c*/
}

// note!
// All string i.e array of characters always end with a null character \0 which identifies end of a string.
```

### 3-puts.c 

```c
#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) // iterate over all chars until the last is reached 
	{
		_putchar(str[i]); // print chars at index i, i.e if i = 1, print char in that index 
	}
	_putchar('\n');
}
```
Lets talk about array a bit here, so array is a data structure in c programming language used to store multiple values of the same data types. we can declare an array variable using the square bracket notation and or the pointer for char data type variable 
Examples:

```c
// For int
int numbers[7] = {4, 6, 8, 7, 7, 5, 0}; //the value in the square bracket is the number or items the number array will take, 
// and that will be 4bytes i.e sizeof int items in 7 places, so array will be taking up 7x4bytes of memory, we do not want to
// go beyond the 7th item in this array so as to avoid buffer overflow i.e segmentation fault, which is going beyond boundaries
// of the array. 
/*or*/
int numbers[] = {4, 6, 8, 7, 7, 5, 0}; // the compiler automatically detects the number of elements it the curly braces.

// For chars
char name[] = "Ayo" // array of character A, y and o, which is string "Ayo" i.e an array of characters
// string is not a built in data type in c, but we can define one ourselves simply because string is an array or chars

char name[3] = "Ayo"
/*or using pointer*/

char *name = "Ayo" // using this syntax, this automatically creates a name array that points to the address of the 
//first character in the array, so the array names is created storing the address of A and all other charcters.
```
The [i] is used to index the char array

### Try this!

```c
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]); /*%p prints the pointer's value, meaning the variable address in location */
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%s\n", s);
}

/*The address of the first character in the string is the same as the string variable s*/

```


### Output 
```commandline
0x564c5d55d004
0x564c5d55d004
0x564c5d55d005
0x564c5d55d006
0x564c5d55d007
HI!
```
### Create your own string data type 


```c
#include <stdio.h>

int main(void)
{
    typedef char *string; // typedef function to define a funtion char *string

    string name = "Ayobami";

    printf("%s is the name\n", name);
}
```

### 101-keygen.c

### 101-crackme disassemblying file 

Using gdb to dissassemble main and the checksum function
A checksum is a string of numbers and letters that act as a fingerprint for a file, against which later comparisons can be made to detect errors in the data.
From the output, we can identify the call of checksum function from the call instruction, and then look for compare instruction 
and get the value of what it been compared to for data integrity. So in this case, it was compared with 0xad4 which is the total value of the characters inputed in the program.
The 0xad4 hex value converted to decimal is 2772, which is the total ascii characters in the  crackme program.

```commandline
 0x00000000004005b6 <+25>:    mov    (%rax),%rax
   0x00000000004005b9 <+28>:    mov    %rax,%rsi
   0x00000000004005bc <+31>:    mov    $0x4006a4,%edi
   0x00000000004005c1 <+36>:    mov    $0x0,%eax
   0x00000000004005c6 <+41>:    call   0x400440 <printf@plt>
   0x00000000004005cb <+46>:    mov    $0x1,%eax
   0x00000000004005d0 <+51>:    jmp    0x400613 <main+118>
   0x00000000004005d2 <+53>:    mov    -0x20(%rbp),%rax
   0x00000000004005d6 <+57>:    add    $0x8,%rax
   0x00000000004005da <+61>:    mov    (%rax),%rax
   0x00000000004005dd <+64>:    mov    %rax,%rdi
   0x00000000004005e0 <+67>:    call   0x400566 <checksum>
   0x00000000004005e5 <+72>:    mov    %rax,-0x8(%rbp)
   0x00000000004005e9 <+76>:    cmpq   $0xad4,-0x8(%rbp)   (Comparison address)
   0x00000000004005f1 <+84>:    je     0x400604 <main+103>
   0x00000000004005f3 <+86>:    mov    $0x4006b8,%edi
   0x00000000004005f8 <+91>:    call   0x400430 <puts@plt>
   0x00000000004005fd <+96>:    mov    $0x1,%eax
   0x0000000000400602 <+101>:   jmp    0x400613 <main+118>
   0x0000000000400604 <+103>:   mov    $0x4006c7,%edi
   0x0000000000400609 <+108>:   call   0x400430 <puts@plt>
   0x000000000040060e <+113>:   mov    $0x0,%eax
   0x0000000000400613 <+118>:   leave  
   0x0000000000400614 <+119>:   ret 
```
### Password generator

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main body
 * Return: All good
*/

int main(void)
{
	int myrand; /*varaible for the random number to be generated*/
	int count;  /*counter variable to determine the iteration times*/
	int total; /*this is the variable to hold the total number of character generated from disassemblying the checksum function*/

	srand(time(NULL)); /*ensuring no repetition between runs*/
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 127); /*the remainder of rand() function result divided by the highest ascii decimal char is stored to myrand*/
		printf("%c", myrand); /*myrand decimal number is printed as char*/
		total -= myrand; /*myrand is subtracted from the total*/
	}
	printf("%c", total); /*when total is less or equal to 122, the decimal character is printed*/

	return (0);
}

```
[Check here for more info on reverse engineering and the task](https://sweetcode.io/dreaming-reverse-engineering/)

![ASCII-Table-wide](https://user-images.githubusercontent.com/91608325/197813414-5d6f108b-5b42-44c6-a06f-23b72c378447.svg)
