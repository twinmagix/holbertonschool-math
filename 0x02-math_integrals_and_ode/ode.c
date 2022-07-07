/*
* 0 - ODE method
* Author: elizabeth Mashilo
* Date: April 13, 2022
*/

#include <stdio.h>
#include <math.h>

/**
* euler_method - euler_method
* @a: double
* @b: double
* @steps: int
* Return: double
*/

double euler_method(double a, double b, int steps)
{
int i;
double width, alfa, beta, gamma, x, xa;
/* same file to plot the pendulum ??? */
/* EULER */
/* ODE u''(x) = - sin(u(x)) */
/* u(0) = 0 */
/* u'(0) = 1 */
/* Yn + 1 = Yn + h f'(x)  */
/* out to dat file */
/* run gunplot from command line?? */
/* x		x'		dy/dx  */
/* ----------------------------------- */
/* 0		1		- sin(u(0)) -> -sin(0) */
/* x+width	1+(-sin(x))	- sin(u(x')) */
/* initial conditions */
x = 0;
xa = 1;
/* steps */
i = steps;
/* increment */
width = (b - a) / steps;
/* create a loop to walk steps */
for (i = 0; i <= steps; i++)
{
/* print steps */
printf("x:%lf x':%lf dy/dx:%lf \n", alfa, beta, gamma);
/* append to file .dat */
alfa += x + width;
beta += xa + (-sin(alfa));
gamma +=  -sin(beta);

}

/* Lets see */
return(gamma);
}
