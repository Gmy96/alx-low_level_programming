#include "main.h"

/**
 * 
 * 
 * 
 * 
 * 
*/

void print_most_numbers(void)
{
    int x;

    for (x = 48; x <= 57; x++)
    {
        if (x == 2 || x == 4)
        {
            break;
        }

        _putchar(x);
    }

    _putchar('\n');
}