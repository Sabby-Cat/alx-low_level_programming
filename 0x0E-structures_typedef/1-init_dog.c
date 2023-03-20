#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises a dog strut
 * @d: struct being called to create
 * @name: name to set
 * @age: age to set
 * @owner: owner to set
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
