#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
*/

int main(void)
{
	int x;

	while (x <= 9)
	{
		printf("%d\n", x);
		x++;
	}

	return (0);
}
