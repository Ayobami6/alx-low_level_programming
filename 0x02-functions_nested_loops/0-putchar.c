#include "main.h"
/**
 * main - prints out _putchar
 * Return: All good
 */
int main(void)
{
	char *s = "_putchar"; /*arrays of characters or strings*/
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
