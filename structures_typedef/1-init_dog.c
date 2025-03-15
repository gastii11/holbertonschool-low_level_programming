#include "dog.h"
#include <stddef.h>
/**
 * init_dog - funcion
 * @d: puntero
 * @name: puntero
 * @age: entero
 * @owner: puntero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
