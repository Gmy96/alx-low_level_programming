#include "main.h"

/***/

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        _putchar(c);
        return (1);
    }

    else
    {
        return (0);
    }
}