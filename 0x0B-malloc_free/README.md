# ALX Software Engineer Cohort-10 First Trimester Course on C

## Learning C With Peers

### Dynamic Memory Allocation 
Dynamic memory allocation is a concept in C that allows us to dynamically allocate memory at runtime. Dynamically allocated memory usually come from the pool of memory called Heap. Up to this point we've been working on memory from the stack, which are memory created when we declare/initialize a variable or call functions or arrays. 
Check explantions on recursion to learn more about stack and memory.

### How do we dynamically allocate memory in C 
To allocate memory dynamically in C is pretty straight forward with the use of `malloc and free` functions and pointer variables.

>- `malloc`: This is just as it sounds memory allocate, it is a function in C from `stdlib` used to allocate memory at runtime to pointer variable, takes an argument of the number of bytes for the memory you want the computer to get for you. 
>- `free`: Does the opposite of malloc, frees the chunk of memory malloc has given you so as to avoid running out memory which might lead to stack overflow problem. 
This is the kind of the idea behind you having really really slow program or software freezing, when the program or software keep asking for memory using malloc without actually freeing it, the computer might actually end up using all memory and the program/software will start getting slow, lagging or freezing because there isn't any memory left to use when all the one's used are not freed. 
So one of the reasons computers might be really really slow sometimes is becasue it calling too much malloc without freeing it. 

### Example 

```c
#include <stdio.h>
#include <stdlib.h>

/*Delibrate mistake code*/

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    if (x == NULL)
        return 1;

    x[0] = 72;

    x[1] = 34;

    x[2] = 67;
}
```
From the code above, we basically put all the theory definition of dynamically allocated memory into code practice.
Inside the main function the x pointer varaible is declared and intiallize taking the address of the dynamic memory on the heap as it's value, the malloc get us a chunk of memory of 4 bytes which is the size of int, in three places, picture it as 1 x 3 grid, grid 1 having size of 4 bytes and so forth. The if statement is just an error check, that is, if something goes wrong and the computer was unable to allocate the memory to x just quit and return not sucessfull. Next is just assigning the integer value to the created grid on the heap.
However, there's something missing in this code, I don't know what it is yet, you wanna try?....
Well, if not lets go on, becasue i called malloc which has to do with dynamic memory, and i want to be sure nothing is wrong my program in terms of memory, there is a tool call `valgrind` to help debug memory bugs in your progams.
So, because i want to be well assured that i don't have any memory issue with my program, let's use valgrind mem test on our program execuatble. 

### Valgring Output_1
```commandline
(base) ayo@hp-HP-Pavilion-g6-Notebook-PC:~/Desktop/Study/Practice$ valgrind ./memory 
==16770== Memcheck, a memory error detector
==16770== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16770== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==16770== Command: ./memory
==16770== 
==16770== 
==16770== HEAP SUMMARY:
==16770==     in use at exit: 12 bytes in 1 blocks
==16770==   total heap usage: 1 allocs, 0 frees, 12 bytes allocated
==16770== 
==16770== LEAK SUMMARY:
==16770==    definitely lost: 12 bytes in 1 blocks
==16770==    indirectly lost: 0 bytes in 0 blocks
==16770==      possibly lost: 0 bytes in 0 blocks
==16770==    still reachable: 0 bytes in 0 blocks
==16770==         suppressed: 0 bytes in 0 blocks
==16770== Rerun with --leak-check=full to see details of leaked memory
==16770== 
==16770== For lists of detected and suppressed errors, rerun with: -s
==16770== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
After running the valgrind, even though i didn't get memory errors or many complicated issues about my program in terms of memory, got some information from my heap summary, that i allocated 12 bytes of memory on the heap in 1 block, which is 3 * 4 args i passed into malloc in my program, and then 1 useful insight 1 allocation and 0 frees, Voila!, that's it, i didn't free the memory i allocated, thats why i get the feeling that i'm kinda missing something in my program, now I know whats wrong and what to do fix it. 
However, not freeing the alloc memory might not actually be significant for this kind of program, but by convention it is important to free up the memory dynamically allocated so you'll get the feeling when you are writing more complex programs and calling lots of malloc.

### Fix mem bug 
```c
#include <stdio.h>
#include <stdlib.h>

/*Delibrate mistake code*/

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[0] = 72;

    x[1] = 34;

    x[2] = 67;

    free(x);
}
```
### Valgrind Output_2
```commandline
(base) ayo@hp-HP-Pavilion-g6-Notebook-PC:~/Desktop/Study/Practice$ valgrind ./memory 
==18943== Memcheck, a memory error detector
==18943== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18943== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==18943== Command: ./memory
==18943== 
==18943== 
==18943== HEAP SUMMARY:
==18943==     in use at exit: 0 bytes in 0 blocks
==18943==   total heap usage: 1 allocs, 1 frees, 12 bytes allocated
==18943== 
==18943== All heap blocks were freed -- no leaks are possible
==18943== 
==18943== For lists of detected and suppressed errors, rerun with: -s
==18943== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
Better now all memory freed, no leaks.


### strduplicate function
```c
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *name;
    name = _strdup("Ayo");

    printf("My name is %s\n", name);
    free(name);
}

char *_strdup(char *str)
{
    char *a;
    if (str == NULL)
        return NULL;

    a = malloc(strlen(str) + 1);

    if (a == NULL)
        return NULL;

    for (int i = 0; i < strlen(str) + 1; i++)
    {
        a[i] = str[i];
    }
    return a;
}
```

```commandline
base) ayo@hp-HP-Pavilion-g6-Notebook-PC:~/Desktop/alx-low_level_programming/0x0B-malloc_free$ valgrind ./strdup 
==19940== Memcheck, a memory error detector
==19940== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19940== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==19940== Command: ./strdup
==19940== 
My name is Ayo
==19940== 
==19940== HEAP SUMMARY:
==19940==     in use at exit: 0 bytes in 0 blocks
==19940==   total heap usage: 2 allocs, 2 frees, 1,028 bytes allocated
==19940== 
==19940== All heap blocks were freed -- no leaks are possible
==19940== 
==19940== For lists of detected and suppressed errors, rerun with: -s
==19940== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

### alloc_grid

```c
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
    int **grid; // initializing double pointer for the 2d array
    int i, j;

    if (width + height < 2 || width < 1 || height < 1) // if width and height is 0
        return (NULL);

    grid = malloc(height * 8); // grid array meomory allocaion
    if (grid == NULL)          // if no memory is allocated to grid return Null
        return (NULL);

    for (i = 0; i < height; i++) // allocating memory for the height which is the row
    {
        grid[i] = malloc(width * 4);
        if (grid[i] == NULL) /* if any memory allocation fails for the height free the previously
         allocated and return NUll */
        {
            for (i--; i >= 0; i--)
                free(grid[i]);
            free(grid);
            return (NULL);
        }
        for (j = 0; j < width; j++) /* Assigning 0 to row i and column j*/
            grid[i][j] = 0;
    }

    return (grid); /*Return the grid double pointer*/
}

```
```commandline
(base) ayo@hp-HP-Pavilion-g6-Notebook-PC:~/Desktop/alx-low_level_programming/0x0B-malloc_free$ valgrind ./grid
==20696== Memcheck, a memory error detector
==20696== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20696== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==20696== Command: ./grid
==20696== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==20696== 
==20696== HEAP SUMMARY:
==20696==     in use at exit: 224 bytes in 5 blocks
==20696==   total heap usage: 6 allocs, 1 frees, 1,248 bytes allocated
==20696== 
==20696== LEAK SUMMARY:
==20696==    definitely lost: 32 bytes in 1 blocks
==20696==    indirectly lost: 192 bytes in 4 blocks
==20696==      possibly lost: 0 bytes in 0 blocks
==20696==    still reachable: 0 bytes in 0 blocks
==20696==         suppressed: 0 bytes in 0 blocks
==20696== Rerun with --leak-check=full to see details of leaked memory
==20696== 
==20696== For lists of detected and suppressed errors, rerun with: -s
==20696== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
The function `free_grid` in task 0x04 will help fix this.