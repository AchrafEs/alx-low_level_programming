#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: new dog's name.
 * @age: new dog's age.
 * @owner: new dog's owner.
 *
 * Return: NULL (failed). pointer to new dog (success).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc((len1 + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((len2 + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
