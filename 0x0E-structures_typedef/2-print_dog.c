#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog's data
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else if (!d->age)
		printf("Age: (nil)\n");
	else if (!d->owner)
		printf("Owner: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}