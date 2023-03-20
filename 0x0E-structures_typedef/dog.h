#ifndef DOG_H
#define DOG_H

/**
 * struct dog - attributes of dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Description: attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner
};

/**
 * dog_t - type def for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
