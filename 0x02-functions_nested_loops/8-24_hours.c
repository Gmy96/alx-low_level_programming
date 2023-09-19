#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - unction that prints every minute of the day 00:00 to 23:59
 *
 * Return: no return
*/

void jack_bauer(void)
{
	int x;
	int y;
	int z;
	int q;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (q = 0; q <= 9; q++)
				{
					if (x >= '2' && y >= '4')
					{
						break;
					}
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(q + '0');
					_putchar('\n');
				}
			}
		}
	}
}
