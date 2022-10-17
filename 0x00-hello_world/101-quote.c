#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1 do not go well
 */
int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		  59);
	return (1);
}
