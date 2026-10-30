#include "main.h"

/**
 * more_numbers - prints digits 0 to 14, 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
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