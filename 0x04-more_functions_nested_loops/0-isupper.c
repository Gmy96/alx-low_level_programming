#include "main.h"

/**
* _isupper - function that checks for uppercase character
*
* @c: The Character
*
* Return: 1 for uppercase character and 0 for otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
