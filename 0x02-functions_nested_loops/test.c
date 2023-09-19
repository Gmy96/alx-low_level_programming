#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	int q;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '5'; z++)
			{
				for (q = '0'; q <= '9'; q++)
				{
					if (y >= '4')
					{
						break;
					}
					putchar(x);
					putchar(y);
					putchar(':');
					putchar(z);
					putchar(q);
					putchar('\n');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
