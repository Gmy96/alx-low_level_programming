#ifndef DOG_H
#define DOG_H

/**
* struct dog - A structure with some elements
*
* Descrition: A structure for dogs data
*
* @name: Character for name
*
* @age: Float for age
*
* @owner: character for owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
