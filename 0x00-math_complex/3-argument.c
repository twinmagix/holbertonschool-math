/*
* 0-display.c
* Author: Sazi Ndwandwe
* Date: March 16, 2022
*/

#include "holberton.h"
#include <math.h>

/**
* argument - return the argument
* @c: structure complex
* Return: double a
*/

double argument(complex c)
{
double a;
a = atan(c.im / c.re);
return (a);
}
