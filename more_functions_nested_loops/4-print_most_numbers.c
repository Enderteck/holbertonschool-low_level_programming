#include "main.h"

/**
 * print_most_numbers - prints most of the digits
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	char nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		if (nbr != '2' && nbr != '4')
			_putchar(nbr);
		nbr++;
	}
	_putchar('\n');
}
