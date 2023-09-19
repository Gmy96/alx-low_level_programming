#include <stdio.h>
#include "main.h"

/**/

int print_last_digit(int x)
{
	int y = x % 10;

	if (x > 0)
	{
		_putchar(y + '0');
		return (y);
	}

	else
	{
		_putchar(-y + '0');
		return (-y);
	}
}
