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
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

