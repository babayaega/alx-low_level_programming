#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a dog type element
 * @name: pointer to the dog's name
 * @age: the dog's age
 * @owner: pointer to the name of the dog's owner
 * Return: nothing
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
