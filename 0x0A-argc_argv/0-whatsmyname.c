#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: The intger of varaibles
 *
 * @argv: An array of stings
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        printf("%s\n", argv[0]);
    }
	return (0);
}
