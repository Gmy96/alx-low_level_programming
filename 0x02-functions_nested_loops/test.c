#include <stdio.h>

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		putchar('0');

		for (y = 1; y <= 9; y++)
		{
			putchar(',');
			putchar(' ');

		z = x * y;

			if (z <= 9)
			{
				putchar(' ');
			}

			else
			{
				putchar((z / 10) + '0');
			}

			putchar((z % 10) + '0');
		}
        putchar('\n');
	}
}
