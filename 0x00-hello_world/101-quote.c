#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: program that prints exactly phase
 *
 * Return: 1
*/

int main(void)
{
	char pha[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, pha, 59);

	return (1);
}
