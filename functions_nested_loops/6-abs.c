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
