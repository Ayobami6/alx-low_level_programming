#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: name string
 * @age: integer
 * @owner: owner string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dogStruct;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogStruct *new_dog(char *name, float age, char *owner);
void free_dog(dogStruct *d);
#endif
