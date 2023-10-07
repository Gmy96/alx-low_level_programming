#include <stdio.h>
#include "main.h"

/**
* _abs - function that computes the absolute value of an integer
*
* @x: the intger
*
* Return: the absolute value
*/

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}

	else
	{
		return (x * -1);
	}
}
