#include <stdio.h>

/**
 * main - Desc
 *
 * Return: 0 when program is done
 */
int main(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (!(nbr % 3) || !(nbr % 5))
		{
			if (!(nbr % 3))
				printf("Fizz");
			if (!(nbr % 5))
				printf("Buzz");
		}
		else
			printf("%d", nbr);
		if (nbr != 100)
			printf(" ");
		nbr++;
	}
	printf("\n");
	return (0);
}
