#include "main.h"

/**
* print_most_numbers - prints the numbers from 0 to 9 without printing 2 and 4
*
* Return: No return
*/

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
			break;
		}

		_putchar(x);
	}

	_putchar('\n');
}
