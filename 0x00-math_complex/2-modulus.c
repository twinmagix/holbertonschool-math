#include "main.h"
#include <math.h>

/**
* modulus - return the modulus
* @c: structure complex
* Return: c
*/

double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (mod);
}
