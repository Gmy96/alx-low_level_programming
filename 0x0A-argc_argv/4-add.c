#include <stdio.h>
#include <stdlib.h>

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
	int x = 0;
    char *c;

    while (--argc)
    {
        for (c = argv[argc]; *c; c++)
        {
            if (*c < '0' || *c > '9')
            {
                printf("Error\n");
                return (1);
            }

            else
            {
                x = x + atoi(argv[argc]);
            }
            
        }
    }
    printf("%d\n", x);

    return (0);
}
