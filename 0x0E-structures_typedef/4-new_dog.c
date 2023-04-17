#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	char *temp_name, *temp_owner;

	cr_dg = malloc(sizeof(dog_t));
	temp_name = malloc(sizeof(char) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (temp_name && cr_dg && temp_owner)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);

		cr_dg->name = temp_name;
		cr_dg->age = age;
		cr_dg->owner = temp_owner;
	}
	else
	{
		return (NULL);
	}
	return (cr_dg);
}
