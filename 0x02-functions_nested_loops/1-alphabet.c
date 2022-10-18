#include "main.h"
/**
* print_alphabet - Prints alphabets in lowercase
* Return: All good
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
