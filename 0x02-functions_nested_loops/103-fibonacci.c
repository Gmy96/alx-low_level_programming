#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: program that finds and prints the sum of the even-valued terms
*
* Return: Always 0
*/

int main(void)
{
	unsigned long x = 0;
	unsigned long y = 1;
	float Sum = 0;

	while (x <= 4000000)
	{
		if (x % 2 == 0)
		{
			Sum = Sum + x;
		}

		x = y;
		y = x + y;
	}

	printf("%.0f\n", Sum);

	return (0);
}
