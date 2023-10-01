#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
*
* @s: The string
*
* Return: The lenght
*/

int _strlen_recursion(char *s)
{

	int x = 0;

	if (*s == '\0')
	{
		x++;
		x = x + _strlen_recursion(s + 1);
	}

	return (x);
}
