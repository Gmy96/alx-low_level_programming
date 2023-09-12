#include <sdtio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Rerurn: Always 0
*/

int main()
{
	int x = 97;

	while (x <= 122)
	{
		putcher(x);
		x++;
	}
	putcher('\n')
	return (0);
}
