#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Intializes the variabe to type struct dog
 * @d: pointer to struct
 * @name: Intializes name
 * @age: Intializes age
 * @owner: Intializes owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
