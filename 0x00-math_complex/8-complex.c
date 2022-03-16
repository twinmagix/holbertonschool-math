#include "main.h"
#include <math.h>

/**
* complex_from_mod_arg - update complex
* @m: double
* @arg: double
* @c3: complex
* Return: void
*/

void complex_from_mod_arg(double m, double arg, complex *c3)
{
/* take distance from modulus */
/* take angle from argument */
/* senØ = a/c; c = Hypotenuse a = oposite catetus  */
/* cosØ = b/c; c = Hypotenuse b = adyacent catetus */
/* tanØ = a/b;  */

/* apply pitagoras to get the values */
/* im part */
double a;
/* re part */
double b;

a = sin(arg) * m;
b = cos(arg) * m;

c3->re = b;
c3->im = a;
}
