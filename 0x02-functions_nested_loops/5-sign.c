#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: The number
 *
 * Return: 1 if greater than zero, -1 if is zero, 0 if is less than zero
*/

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 48)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
