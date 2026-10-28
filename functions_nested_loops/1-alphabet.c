#include "main.h"

/**
 * main - uses the puchar funtion in main.h to print
 *
 * Return: 0 when program is done
 */
void print_alphabet(void)
{
	char ltr;

	ltr = 'a';
	while (ltr <= 'z')
		_putchar(ltr++);
	_putchar('\n');
	return;
}
