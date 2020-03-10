#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * _strcpy -  duplicate  string.
 *@dest: destination string pointer
 *@src: source string pointer
 * Return: string pointer with duplication.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: On success 1.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	if (name != NULL)
	{
		new_dog->name = malloc(sizeof(name));
		if (new_dog->name == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
	}

	_strcpy(new_dog->name, name);

	new_dog->age = age;
	if (owner != NULL)
	{
		new_dog->owner = malloc(sizeof(owner));
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog->owner);
			free(new_dog);
			return (NULL);
		}
	}

	_strcpy(new_dog->owner, owner);

	return (new_dog);
}
