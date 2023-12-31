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
	unsigned long Sum;
	float Total_Sum;

	while (x <= 4000000)
	{
		Sum = x + y;
		if (Sum % 2 == 0)
		{
			Total_Sum = Total_Sum + Sum;
		}

		x = y;
		y = Sum;
	}

	printf("%.0f\n", Total_Sum);

	return (0);
}
