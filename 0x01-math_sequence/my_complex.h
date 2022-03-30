#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include <stdio.h>
#include <math.h>

/**
 * struct complex_number - Defines a complex number
 * @re: real part of the complex numbrer
 * @im: imaginary part of the complex number
 *
 * Description: Parts of a complex number
 */
typedef struct complex_number
{
		double re;
			double im;
} cplx;

cplx newcpl(double r, double i);
cplx cplconj(cplx c);
double cplmod(cplx c);
double cplarg(cplx c);
cplx cpladd(cplx c1, cplx c2);
cplx cplsub(cplx c1, cplx c2);
cplx cplmul(cplx c1, cplx c2);
cplx cpldiv(cplx c1, cplx c2);

/**
 * newcpl - defines a new complex number
 * 
 * @r: real part
 * @i: imaginary part
 * */
cplx newcpl(double r, double i)
{
	cplx cj;

	cj.re = r;
	cj.im = i;
	return (cj);
}

/**
 * cplconj - conjugates the given complex number c
 * */
cplx cplconj(cplx c)
{
	cplx cj = c;

	cj.im *= -1;
	return (cj);
}

/**
 * cplmod - obtains the module of the given complex number c
 */
double cplmod(cplx c)
{
	double mod = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (mod);
}

/**
 * cplarg - obtains the argument between the real part and the imaginary part
 * of the given complex number c
 */
double cplarg(cplx c)
{
	double tan_arg = c.im / c.re;

	return (atan(tan_arg));
}

/**
 * cpladd - adds the given complex numbers c1 and c2
 */
cplx cpladd(cplx c1, cplx c2)
{
	cplx c3;

	c3.re = c1.re + c2.re;
	c3.im = c1.im + c2.im;
	return (c3);
}

/**
 * cplsub - subtracts the given complex numbers c1 and c2
 */
cplx cplsub(cplx c1, cplx c2)
{
	    cplx c3;
	        
	    c3.re = c1.re - c2.re;
	    c3.im = c1.im - c2.im;
	    return (c3);
}

/**
 * cplmul - multiplies the given complex numbers c1 and c2
 */
cplx cplmul(cplx c1, cplx c2)
{
	    cplx c3;
	        
	    c3.re = c1.re * c2.re - c1.im * c2.im;
	    c3.im = c1.re * c2.im + c1.im * c2.re;
	    return (c3);
}

/**
 * cpldiv - divides the given complex numbers c1 and c2
 */
cplx cpldiv(cplx c1, cplx c2)
{
	cplx c3;
	cplx dividend, divider;

	dividend = cplmul(c1, cplconj(c2));
	divider = cplmul(c2, cplconj(c2));
	c3.re = dividend.re / divider.re;
	c3.im = dividend.im / divider.re;
	return (c3);
}

#endif
