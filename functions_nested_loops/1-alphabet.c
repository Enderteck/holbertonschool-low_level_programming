#include "main.h"

/**
 * print_alphabet - uses the puchar funtion in main.h to print
 * the alphabet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char ltr;

	ltr = 'a';
	while (ltr <= 'z')
		_putchar(ltr++);
	_putchar('\n');
}
