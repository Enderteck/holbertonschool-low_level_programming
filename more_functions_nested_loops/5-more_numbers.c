#include "main.h"

/**
 * print_most_numbers - prints most of the digits
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int nbr;
	int i;

	i = 0;
	while (i < 10)
	{
		nbr = 0;
		while (nbr <= 14)
		{
			if (nbr > 9)
				_putchar('0' + (nbr / 10));
			_putchar('0' + (nbr % 10));
			nbr++;
		}
		_putchar('\n');
		i++;
	}
}