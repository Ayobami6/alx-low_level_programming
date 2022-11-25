#include <stdio.h>

/**
 * before_main - Print statement within this
 * function before running main function
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
