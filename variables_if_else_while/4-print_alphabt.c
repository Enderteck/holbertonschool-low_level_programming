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
	{
		if (lettre != 'q' && lettre != 'e')
			putchar(lettre);
		lettre++;
	}
	putchar('\n');
	return (0);
}
