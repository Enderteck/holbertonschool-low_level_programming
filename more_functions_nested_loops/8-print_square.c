#include "main.h"

/**
 * print_square - prints a square dependign on size
 * @size: square height & width
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	do {
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	} while (i < size);
}
