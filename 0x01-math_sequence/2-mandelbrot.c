#include <stdio.h>
#include <curses.h>
/**
 * main - Function that prints Mandelbrot’s Sets
 *
 * Return: End Program
 */
int main(void)
{
	int A, B, i;
	double a, b, x, y, t, n = 20;

	printf("Mandelbrot Set\n");

	for (B = 0; B <= 4 * n; B++)
	{
		b = 2 - (B / n);
		for (A = 0; A <= 4 * n; A++)
		{
			a = -2 + (A / n);
			x = 0;
			y = 0;

			for (i = 1; i <= 1000; i++)
			{
				t = x;
				x = (x * x) - (y * y) + a;
				y = (2 * t * y) + b;
				if ((x * x) + (y * y) > 4)
					break;
			}

			if (i == 1001)
				printf(".");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
	return (0);
}
