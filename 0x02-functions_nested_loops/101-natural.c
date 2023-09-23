#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: list all the natural numbers are multiples of 3 or 5
*
* Return: Always 0
*/

int main(void)
{
	int x;

	int Sum;

	for (x = 3; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			Sum = Sum + x;
		}
	}

	printf("%d\n", Sum);

	return (0);
}
