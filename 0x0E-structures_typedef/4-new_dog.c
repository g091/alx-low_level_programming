#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for the name of the dog
 * @age: age of the dog
 * @owner: pointer to a char for the owner of the dog
 * Return: pointer to a new dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *dog1;

	dog1 = (dog_t *)malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	dog1->name = malloc(nameLen * sizeof(dog1->name));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		dog1->name[i] = name[i];
	dog1->age = age;
	dog1->owner = malloc(ownerLen * sizeof(dog1->owner));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		dog1->owner[i] = owner[i];
	return (dog1);
}
