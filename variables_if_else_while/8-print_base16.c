#include <stdlib.h>
#include <stdio.h>

/**
 * main - Desc
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int chiffre;

	chiffre = '0';
	while (chiffre <= '9')
		putchar(chiffre++);
	chiffre = 'a';
	while (chiffre <= 'f')
		putchar(chiffre++);
	putchar('\n');
	return (0);
}
