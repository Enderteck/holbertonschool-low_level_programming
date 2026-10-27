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

	chiffre = 'z';
	while (chiffre >= 'a')
		putchar(chiffre--);
	putchar('\n');
	return (0);
}
