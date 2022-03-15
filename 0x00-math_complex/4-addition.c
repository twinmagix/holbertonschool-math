#include "main.h"

/**
 * addition - returns the modulus
 * @c1: the complex 1
 * @c2: the complex 2
 * @c3: the complex 3
 * Return: the modulus of complex
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
