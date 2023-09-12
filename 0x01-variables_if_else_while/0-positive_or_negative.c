#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main entry point
 *
 * description variable n is positive or negative
 *
 * return 0 to success
*/

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if(n>0)
					{
						printf("the number is positive \n");
					}
					else if(n==0)
					{
						printf("the number is zero \n");
					}
					else(n<0)
					{
						printf("the number is negative \n");
					}
					return (0);
}
