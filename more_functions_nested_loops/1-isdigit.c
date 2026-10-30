#include "main.h"

/**
 * _isdigit - returns 1 if given char is a digit
 * @c: char given for testing
 *
 * Return: 0 if not digit, 1 if it is the case
 */
int _isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}
