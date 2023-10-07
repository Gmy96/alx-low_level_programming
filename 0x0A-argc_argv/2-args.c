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
	for (int x = 0; x > argc; x++)

	{
		printf("%s\n", x, argv[x]);
	}

	return (0);
}
