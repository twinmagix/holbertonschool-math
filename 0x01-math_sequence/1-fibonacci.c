#include "fibonacci.h"
/**
 * create_Fibonnaci - Function that creates the f(n) fibonacci
 * structure
 *
 * @f: Parameter counter for f(n)
 * @s: Parameter sum of n0 & n1
 * @n0: Parameter f(n-1)
 * @n1: Parameter f(n-2)
 *
 * Return: Return the head of the fibonacci Linked List
 */
t_cell *create_Fibonnaci(int f, double s, double n0, double n1)
{
	t_cell *new, *head = NULL, *tmp = NULL;
	float x1 = 0, x2 = 0;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
		return (NULL);
	head = new;
	new->next = NULL;
	if (f < 2)
	{
		new->elt = 1;
		f++;
		head = create_Fibonnaci(f, s, n0, n1);
	}
	else
	{
		s = n1 + n0;
		new->elt = s;
		f++;
		x1 = s / n1;
		x2 = n1 / n0;
		if (x1 == x2)
		{
			head = new;
			return (head);
		}
		else
		{
			n0 = n1;
			n1 = s;
			head = create_Fibonnaci(f, s, n0, n1);
		}
	}
	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (head);
}
/**
 * Fibonnaci - function return a pointer with the head of
 * the fibonacci linked list
 *
 * Return: Return the head of the fibonacci linked list
 */
t_cell *Fibonnaci()
{
	t_cell *new;
	int f = 0;
	double s = 0, n0 = 1, n1 = 1;

	new = create_Fibonnaci(f, s, n0, n1);

	return (new);
}
/**
 * gold_number - Function that Return the Golden Ratio
 * of the fibonacci serie
 *
 * @head: Parameter pointer to the head of the fibonacci
 * linked list
 *
 * Return: Return the Golden Ratio of the fibonacci serie
 */
double gold_number(t_cell *head)
{
	t_cell *tmp;
	double gr, gr1, gr2;

	tmp = head;
	gr1 = tmp->elt;
	gr2 = (tmp->next)->elt;
	gr = gr1 / gr2;

	return (gr);
}
