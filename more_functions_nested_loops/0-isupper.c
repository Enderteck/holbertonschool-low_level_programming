#include "main.h"

/**
 * _isupper - returns 1 if given char is an uppercase letter
 * @c: char given for testing
 *
 * Return: 0 if not uppercase latter, 1 if it is the case
 */
int _isupper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}
