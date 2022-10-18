#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 otherwise lowercase
 */
int _islower(int c)
{
	/*if the character is between 96 and 123
	ASCII decimals for characters*/
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
