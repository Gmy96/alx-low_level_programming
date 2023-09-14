#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
*/

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		x++;
	}

	putchar('\n');
	return (0);
}
