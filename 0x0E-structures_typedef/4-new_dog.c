#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: null on fail, pointer to
 * dog struct on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cr_dg;

	cr_dg = malloc(sizeof(dog_t));
	if (cr_dg)
	{
		cr_dg->name = name;
		cr_dg->age = age;
		cr_dg->owner = owner;
	}
	else
		return (NULL);

	return (cr_dg);
}
