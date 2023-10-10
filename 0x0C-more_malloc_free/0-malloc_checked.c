#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc
*
* @b: The intger
*
* Return: The pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == 0)
	{
		exit(98);
	}

	return (x);
}
