#include <stdio.h>
#include "main.h"

/**
* _islower - function that checks for lowercase character
*
*@c: the character
*
* Return: 1 if c is lowercase or 0 otherwise
*/

int _islower(int c)
{
	char x;
	int y = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
			y = 1;
	}

	return (y);
}

