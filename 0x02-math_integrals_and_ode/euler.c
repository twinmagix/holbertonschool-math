#include <stdio.h>
#include <math.h>
#include "euler.h"

/**
 *Euler - euler method
 *@euler: path
 *@name: name
 *@x0: double
 *@y0: double
 *@T: double
 *@n: int 
 */
void Euler(FILE *euler, char *name, double x0, double y0, double T, int n)
{
	euler = fopen("C://program.txt","name");
	x0 = 2 * (T/n)
	if (euler == NULL)
	{
		printf("Error!");
		exit(1);
	}

	fprintf(euler, "%d",x0);
	fclose(euler);
}
