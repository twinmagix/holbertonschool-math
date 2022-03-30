#include "my_complex.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <unistd.h>

/**
 * mandelbrot - verify if the Mandelbrot set works for the given complex number
 * @max: number of remaining iterations
 * @z0: a complex number to verify the Mandelbrot set
 *
 * Return: 1 if worked, 0 if not
 */
int mandelbrot(unsigned int max, cplx z0, cplx c)
{
	if (max > 0)
		return mandelbrot(max - 1, cpladd(cplmul(z0, z0), c), c);
	else if (cplmod(z0) > 2)
		return 1;
	else
		return 0;
}

/**
 * main - makes a .pgm file with the result of Mandelbrot set
 *
 * Return: zero
 */
int main()
{
	int i, j;
	int n, m;
	int iter;
	double sup_real, inf_real, sup_imag, inf_imag;
	cplx C;
	double pX, pY;
	FILE *fp;
	int **matrix;

	printf("Image Length: ");
	scanf("%d", &n);
	printf("Image Height: ");
	scanf("%d", &m);
	if (n <= 0 || m <= 0) {
		write(STDERR_FILENO, "Image size error!", 17);
		return (EINVAL);
	}
	printf("Number of iterations: ");
	scanf("%d", &iter);
	if (iter <= 0) {
		write(STDERR_FILENO, "Number of iterations error!", 27);
		return (EINVAL);
		  	}
	printf("Maximum real limit: ");
	scanf("%lf", &sup_real);
	printf("Minimum real limit: ");
	scanf("%lf", &inf_real);
	printf("Maximum imaginary limit: ");
	scanf("%lf", &sup_imag);
	printf("Minimum imaginary limit: ");
	scanf("%lf", &inf_imag);
	  	if (sup_real == 0 || inf_real == 0 || sup_imag == 0 || inf_imag == 0) {
			write(STDERR_FILENO, "Limit error!", 12);
			return (EINVAL);
		}
		matrix = malloc(m * sizeof(int *));
		if (matrix == NULL)
		{
			free(matrix);
			write(STDERR_FILENO, "Error in allocate memory!", 25);
			return (-1);
		}
		for (i = 0; i < m; i++)
		{
			matrix[i] = malloc(n * sizeof(int));
			if (matrix[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(matrix[j]);
				}
				write(STDERR_FILENO, "Error in allocate memory!", 25);
				return (-1);
			}
		}
		pX = ((sup_real - inf_real) / n);
		pY = ((sup_imag - inf_imag) / m);
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				C = newcpl(inf_real + (j * pX), sup_imag - (i * pY));
				matrix[i][j] = mandelbrot(iter, C, C);
			}
		}
		fp = fopen("mandelbrot.pgm", "w+");
		fputs("P2 \n", fp);
		fprintf(fp, "%d %d \n", n, m);
		fputs("1 \n", fp);
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
				fprintf(fp, "%d ", matrix[i][j]);
			fputs("\n", fp);
		}
		for (i = m - 1; i >= 0; i--)
		{
			free(matrix[i]);
			matrix[i] = NULL;
		}
		free(matrix);
		matrix = NULL;
		return (0);
}
