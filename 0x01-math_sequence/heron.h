#ifndef HEAD_FILE
#define HEAD_FILE

#include <stdio.h>
#include <stdlib.h>
/**
 * struct cell - struct with the data
 *
 * @elt: Parameter with the number data
 * @next: Parameter whit the direction of the next element
 *
 * Description: struct to the linked list
 */
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
