#include "main.h"

/**
 * _abs - returns the absolute value of an int
 * @n: the passed int that is checked
 *
 * Return: the number without it's sign
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

/**
 * print_last_digit - prints last digit of an int
 * @n: the passed int, which we get the last digit from
 *
 * Return: the number without it's sign
 */
int print_last_digit(int n)
{
	while (n > 9 || n < -9)
		n %= 10;
	if (n < 0)
		return (-n);
	return (n);
}
