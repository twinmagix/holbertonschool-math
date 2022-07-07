#include "main.h"
#include "math.h"

/**
* euler_method - euler_method
* @a: data a
* @b: data b
* @steps: the steps size
* Return: ODE
*/
double euler_method(double a, double b, int steps)
{    
    double width, alfa, beta, gamma, x = 0, xa = 1;
    int i;

    i = steps;
    width = (b - a) / steps;

    for (i = 0; i <= steps; i++)
    {
        printf("x:%lf x':%lf dy/dx:%lf \n", alfa, beta, gamma);
        alfa += x + width;
        beta += xa + (-sin(alfa));
        gamma +=  -sin(beta);
    }

    return(gamma);
}
