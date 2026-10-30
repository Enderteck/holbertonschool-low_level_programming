#include "main.h"

/**
 * print_numbers - prints all the digits
 *
 * Return: a * b
 */
void print_numbers(void)
{
	char nbr;

	nbr = '0';
	while (nbr <= '9')
		_putchar(nbr++);
	_putchar('\n');
}
