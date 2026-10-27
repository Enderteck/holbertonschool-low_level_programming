#include <stdlib.h>
#include <stdio.h>

/**
 * main - Desc
 *
 * Return: 0 when program is done
 */
int main(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
		putchar(lettre++);
	lettre = 'A';
	while (lettre <= 'Z')
		putchar(lettre++);
	putchar('\n');
	return (0);
}
