#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer arg 1
 */

void set_string(char **s, char *to)
{
	*s = to;
}
