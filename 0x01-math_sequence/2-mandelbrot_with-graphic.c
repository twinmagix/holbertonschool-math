#include <stdio.h>
#include <conio.h>
#include <graphics.h>
/**
 * main - Function that prints Mandelbrot’s Sets
 *
 * Return: End Program
 */
int main(void)
{
	int A, B, i, gd, gm;
	double a, b, x, y, t, n = 20;

	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, NULL);
	/*printf("Mandelbrot Set\n");*/

	for (B = 0; B <= 4 * n; B++)
	{
		b = 2 - (B / n)
		for (A = 0; A <= 4 * n; A++)
		{
			a = -2 + (A / n)
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
				/** printf("."); **/
				putpixel(A, B, 1);
			/**
			 * else
			 *	printf(" ");
			 */
		}
		/** printf("\n"); **/
	}
	getch();
	closegraph();
	return (0);
}
