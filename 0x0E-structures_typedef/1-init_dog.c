#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: The pointer
 *
 * @name: Character for name
 *
 * @age: Float for age
 *
 * @owner: character for owner name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		*d.name = name;
		*d.age = age;
		*d.owner = owner;
	}
}
