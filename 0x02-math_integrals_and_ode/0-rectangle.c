/*
* 0-rectangle.c - rectangle_method
* Author: Elizabeth Mashilo
* Date: April 13, 2022
*/

#include <stdio.h>
#include <math.h>

/**
* rectangle_method - rectangle_method
* @a: double
* @b: double
* @steps: int
* Return: double
*/

double rectangle_method(double a, double b, int steps)
{

int i;
double width, height, sum, w;

width = (b - a) / steps;
sum = 0.0;
w = a;

	for (i = 1; i <= steps; i++)
	{
		/* in terms of width */
		height = 1 / (1 + (w * w));
		/* of all areas */
		sum += width * height;
		/* change in width */
		w += width;
	}

return (sum);
}
