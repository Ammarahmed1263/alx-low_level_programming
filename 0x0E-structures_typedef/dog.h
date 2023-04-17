#ifndef DOG_H
#define DOG_H
/**
 * struct dog - specifies dog characteristics
 * @name: dog name
 * @owner: name of dog owner
 * @age: dog age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif