#include "main.h"

/**
 * print_triangle - Desc
 * @size: height & width of triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int x, y;

	x = 0;
	do {
		for (y = 0; y < size; y++)
		{
			if (x + y < size - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
		x++;
	} while (x < size);
}
