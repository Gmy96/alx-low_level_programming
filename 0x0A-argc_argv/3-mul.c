#include <stdio.h>

/**
* main - entry point
*
* @argc: The intger of varaibles
*
* @argv: An array of stings
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int x, y, z;

		x = *argv[1] - '0';
		y = *argv[2] - '0';
		z = x * y;
		printf("%d\n", z);
		return (0);
	}
}
