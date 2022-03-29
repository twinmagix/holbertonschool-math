#ifndef HEAD_FILE
#define HEAD_FILE

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct cell - Struct for fibonacci serie
 * series
 *
 * @elt: Element f(n) of the serie
 * @next: Pointer to the next element of the linked list
 *
 * Description: Struct that save the elements of the fibonacci
 */
typedef struct cell
{
	int elt;
	struct cell *next;
} t_cell;

/* Prototypes */
t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
