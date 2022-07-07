/*
* 1-simpson.c - simpson method
* Author:Elizabeth Mashilo
* Date: April 13, 2022
*/

#define f(x) (1 / (1 + x * x))
#include <stdio.h>
#include <stdlib.h>

/**
* simpson - simpson_method
* @a: double
* @b: double
* @steps: int
* Return: double
*/

double simpson(double a, double b, int steps)
{
double sum, h, width;
int i;

sum = 0.0;
width = (b - a) / steps;
/*
*	if (steps % 2 == 0)
*	{
*		continue;
*	}
*	else
*	{
*		printf("Given steps are not even\n");
*		exit(2);
*	}
*/

/* first member is 0 */

	for (i = 1; i <= steps - 1; i++)
	{
		h = a + i * width;
		if (i % 2 == 0)
		{
			sum += 2 * f(h);
		}
		else
		{
			sum += 4 * f(h);
		}
	}
/* last member */
sum += 1 * f(a) + f(b);
sum = sum * (width / 3);

return (sum);
}
