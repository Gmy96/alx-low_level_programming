#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: Always 0
*/

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
			putchar(x);
			putchar(y);
			putchar(z);
			if (x == '7')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
