#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	int x;

	for (x = n; x > 98; x--)
	{
		printf("%d,", x);
	}

	for (x = n; x < 98; x++)
	{
		printf("%d,", x);
	}
}
