#include "heron.h"
/**
 * heron - funtion that return the Heron sequence until having convergence
 * with an error less or equal to 10^(-7)
 *
 * @p: Parameter with the number to compare the root
 * @x0: Parameter with the start point
 *
 * Return: The head of the created linked
 */
t_cell *heron(double p, double x0)
{
	double x1, error = 0;
	t_cell *new, *head = NULL, *tmp = NULL;

	x1 = x0;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
		return (NULL);
	head = new;
	new->elt = x1;
	new->next = NULL;

	error = ((x1 * x1) > p) ? (x1 * x1) - p : p - (x1 * x1);

	if (error <= 0.0000001)
	{
		return (head);
	}

	x1 = ((p / x0) + x0) / 2;

	head = heron(p, x1);

	tmp = head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (head);
}
