#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *dogPtr;

	dogPtr = (dog_t *)malloc(sizeof(dog_t));
	if (dogPtr == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	dogPtr->name = malloc(nameLen * sizeof(dogPtr->name));
	if (dogPtr->name == NULL)
	{
		free(dogPtr);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		dogPtr->name[i] = name[i];
	dogPtr->age = age;
	dogPtr->owner = malloc(ownerLen * sizeof(dogPtr->owner));
	if (dogPtr->owner == NULL)
	{
		free(dogPtr->name);
		free(dogPtr);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		dogPtr->owner[i] = owner[i];
	return (dogPtr);
}
