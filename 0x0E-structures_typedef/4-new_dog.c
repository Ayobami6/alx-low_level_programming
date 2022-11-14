#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k;
	char *n, *o;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
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
	for (k = 0; k <= i; k++)
	{
		n[k] = name[k];
	}
	for (k = 0; k <= j; k++)
	{
		o[k] = owner[k];
	}

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);
}
