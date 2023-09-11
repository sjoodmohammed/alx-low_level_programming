#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: dogs name.
 * @age: dogs age.
 * @owner: dogs owners name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
