#include "main.h"

/**
 * square - find the square root
 *
 * @n: The intger
 *
 * @y: The intger to test
 *
 * Return: The square root
*/

int square(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}

	else if (y * y < n)
	{
		return (square(n, y + 1));
	}

	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - unction that returns the natural square root of a number
 *
 * @n: The intger
 *
 * Return: The square root
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
