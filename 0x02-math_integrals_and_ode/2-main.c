#include <stdio.h>
#include "euler.h"

int main(void)
{
double a, b, solution;
int steps;

a = 0.03;
b = 1.4;
steps = 7;

solution = euler_method(a, b, steps);
printf("solution:%lf \n",solution);
return (0);
}
