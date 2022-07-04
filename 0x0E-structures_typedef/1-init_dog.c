#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type struct
 * @d: the array
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Description: A struct for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
