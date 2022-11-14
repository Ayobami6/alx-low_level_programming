#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
int _strlen(char *s);
char *_strdup(char *str);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k;
	char *n, *o;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	i = _strlen(name);
	j = _strlen(owner);
	n = malloc((i * sizeof(char)) + 1);

	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	o = malloc((i * sizeof(char)) + 1);
	if (o == NULL)
	{
		free(new_dog);
		free(n);
		return (NULL);
	}
	n = _strdup(name);
	o = _strdup(owner);
	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);
}

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: a, variable for the string length
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	if (*s == '\0')
		return (0);

	a = 1 + _strlen(s + 1);

	return (a);
}

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];
	a[j] = '\0';

	return (a);
}
