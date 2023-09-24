#include "main.h"

/**
* print_diagonal -  function that draws a diagonal line on the terminal
*
* @n: The ibtger of times
*/

void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
