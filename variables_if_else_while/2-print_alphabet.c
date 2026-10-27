#include <stdlib.h>
#include <stdio.h>

/**
 * main - Desc
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int lettre;

	lettre = 'a';
	while (lettre <= 'z')
		putchar(lettre++);
	return (0);
}
