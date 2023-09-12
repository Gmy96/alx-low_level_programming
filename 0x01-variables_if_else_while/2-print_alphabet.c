#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabets in lowercase
 *
 * Rerurn: Always 0
*/

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
