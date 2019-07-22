#include "dog.h"
#include <stdio.h>
/**
 * init_dog - init variable
 * @d: pointer
 * @name: pointer
 * @age: parameter age give
 * @owner: pointer
 *
 * Return: return pointer
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
