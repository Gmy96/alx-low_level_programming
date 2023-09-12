#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Description : The last digit
 *
 * Return : Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Last digit of %d is greater than 5"\n, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
