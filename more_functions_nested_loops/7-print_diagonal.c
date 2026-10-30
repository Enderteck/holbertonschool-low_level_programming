#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: vertical lenght of the diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	if (n < 0)
		n = 0;
	while (i <= n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('$');
		_putchar('\n');
		i++;
	}
}
