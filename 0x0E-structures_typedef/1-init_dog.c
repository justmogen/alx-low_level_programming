#include "dog.h"
#include <stdlib.h>
/**
 * init-dog - initialize a variable of type struct dog
 * @d:dog to be used
 * @name:name of dog
 * @age:age of dog
 * @owner:points to owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d->name = name;
		d->age = age;
		d->owner = owner;
}
