#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:  prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0
*/

int main(void)
{
	int x = '0';
	int y = 97;

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	while (y <= 102)
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}
