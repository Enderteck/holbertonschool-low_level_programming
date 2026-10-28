#include "main.h"

int _putchar(char c);

/**
 * main - uses the puchar funtion in main.h to print
 *
 * Return: 0 when program is done
 */
int main(void)
{
	char *text;
	int i;

	text = "_putchar";
	i = 0;
	while (text[i])
		_putchar(text[i++]);
	return (0);
}
