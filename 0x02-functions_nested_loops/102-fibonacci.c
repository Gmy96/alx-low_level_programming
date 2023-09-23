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
	int Sum;

	printf("1, 2");

	for (x = 0; x <= 50; x++)
	{
		Sum = x + y;
		printf(", %d", Sum);
		x = y;
		y = Sum;
	}

	printf("\n");

	return (0);
}
