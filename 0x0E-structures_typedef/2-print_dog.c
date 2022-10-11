#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_dog - prints struct dog
 * @d:initializing the dog
 * If an element of d is NULL, print (nil) instead of this element.
 *	(if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->name);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->name);
}
