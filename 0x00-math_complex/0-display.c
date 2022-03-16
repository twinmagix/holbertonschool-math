/*
* 0-display.c
* Author: Rodrigo Zárate Algecira
* Date: July 22, 2021
*/

#include "holberton.h"

/**
* display_complex_number - Display complex number
* @c: Complex number
*/

void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im < 0)
			printf("- %.9gi\n", c.im * (-1));
		else if (c.im == 0)
			printf("0\n");
		else
			printf("%.9gi\n", c.im);
	}
	else
	{
		if (c.im < -1)
			printf("%.9g - %.9gi\n", c.re, c.im * (-1));
		else if (c.im == -1)
			printf("%.9g - i\n", c.re);
		else if (c.im == 0)
			printf("%.9g\n", c.re);
		else if (c.im == 1)
			printf("%.9g + i\n", c.re);
		else
			printf("%.9g + %.9gi\n", c.re, c.im);
	}
}
