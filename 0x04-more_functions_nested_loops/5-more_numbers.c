#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
			_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
