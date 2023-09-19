#include <stdio.h>
#include "main.h"

/***/

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}

	if else (n < 48)
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
