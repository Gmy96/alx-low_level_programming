#include "main.h"

/**
* prime_number - check the numbers
*
* @x: The fisrt intger
*
* @y: The second intger
*
* Return: 1 for success
*/

int prime_number(int x, int y)
{
	if (x == y)
	{
		return (1);
	}

	else if (x % y == 0)
	{
		return (0);
	}

	else
	{
		return (prime2(x, y + 1));
	}
}

/**
* is_prime_number - function that returns 1 if the input is a prime number
*
*@n: The intger
*
* Return: 1 for success
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	else
	{
		return (prime_number(n, 2));
	}
}
