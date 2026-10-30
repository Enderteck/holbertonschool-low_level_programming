#include "main.h"

/**
 * more_numbers - prints digits 0 to 14, 10 times
 * @n: 
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
