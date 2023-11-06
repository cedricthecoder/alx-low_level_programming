#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - new dog creation
* @name: name
* @age: age
* @owner: owner
* Return: dog struct
* if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	char *nm_cp, *own_cp;

	if (!name || !owner)
		return (NULL);
	p_dog = malloc(sizeof(dog_t));
	if (p_dog == NULL)
		return (NULL);
	nm_cp = strdup(name);
	own_cp = strdup(owner);
	if (!nm_cp || !own_cp)
	{
		free(nm_cp);
		free(own_cp);
		free(p_dog);
		return (NULL);
	}
	p_dog->name = nm_cp;
	p_dog->owner = own_cp;
	p_dog->age = age;
	return (p_dog);
}
