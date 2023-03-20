#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;
	int nlen = 0, olen = 0;

	if (name != NULL && owner != NULL)
	{
		nlen = strlen(name) + 1;
		olen = strlen(owner) + 1;
		ret = malloc(sizeof(dog_t));
		if (ret == NULL)
			return (NULL);

		ret->name = malloc(sizeof(char) * nlen);
		if (ret->name == NULL)
		{
			free(ret);
			return (NULL);
		}
		ret->owner = malloc(sizeof(char) * olen);
		if (ret->owner == NULL)
		{
			free(ret->name);
			free(ret);
			return (NULL);
		}
		ret->name = strcpy(ret->name, name);
		ret->owner = strcpy(ret->owner, owner);
		ret->age = age;
	}
	return (ret);
}
