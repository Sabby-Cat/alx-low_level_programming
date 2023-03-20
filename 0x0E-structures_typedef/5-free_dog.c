#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free up a dog struct
 * @d: struct to be cleared
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
