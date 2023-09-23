#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: Always 0
*/

int main(void)
{
	int x = 1;
	int y = 2;
	int z;
	int Sum;

	printf("1, 2");

	for (z = 3; z <= 50; z++)
	{
		Sum = x + y;
		printf(", %i", Sum);
		x = y;
		y = Sum;
	}

	printf("\n");

	return (0);
}
