#include "main.h"

/**
 * times_table - prints
 *
 * Return: nothing
 */
void times_table(void)
{
	int x;
	int y;
	int nbr;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			nbr = (y * x);
			if (nbr > 9)
				_putchar('0' + (nbr / 10));
			else if (x != 0)
				_putchar(' ');
			_putchar('0' + (nbr % 10));
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
			x++;
		}
		y++;
	}
}
