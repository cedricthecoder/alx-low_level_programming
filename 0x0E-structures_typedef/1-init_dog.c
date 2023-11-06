#include <stdlib.h>
#include "dog.h"
/**
*init_dog - some function
*@d: pointer to struct
*@name: name of dog
*@age: dog age
*@owner: dog owner
*return: d
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
