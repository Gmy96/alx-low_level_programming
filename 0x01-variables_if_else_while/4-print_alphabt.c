#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0
*/

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101)
		{
			x++;
			continue;
		}
		if (x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
