#ifndef DOG_H
#define DOG_H
/**
 * init_dog - inizialize dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d:pointer to store parametres
 * Return: On success 1.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
