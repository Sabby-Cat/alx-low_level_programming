#ifndef _DOG_H_
#define _DOG_H_

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
	char *owner;
};

/**
 * dog_t - type def for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
