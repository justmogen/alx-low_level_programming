#ifndef DOG_H
#define DOG_H
/**
 *struct dog - contain type describing information of a dog
 *@name: name of the dog
 *@age: dog's age
 *@owner:dog' owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog my_dog;

#endif
