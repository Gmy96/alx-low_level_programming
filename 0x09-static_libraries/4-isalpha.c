#include <stdio.h>
#include "main.h"

/**
* _isalpha - function that checks for character lowercase or uppercase
*
* @c: The character
*
* Return: 1 ir letter lowercase, uppercase or 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
