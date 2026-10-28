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

/**
 * print_alphabet_x10 - uses print alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
