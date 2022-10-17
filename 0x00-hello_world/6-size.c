#include <stdio.h>

/**
 * main - Prints out the size of c datatypes
 * Return: All good
 */

int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	/*sizeof is a function used to get the size of arguments
	passed in bytes, so because the return data type for the
	sizeof is long int %li is used as a place holder to display
	the result as part of the srings in double quotation
	inside the printf function*/
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}

/* Note!
* You should get something like this as an output
* which are the sizes of the built in data types in C
Size of a char: 1 byte(s) which is 8 bits, example is letter a
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
 */