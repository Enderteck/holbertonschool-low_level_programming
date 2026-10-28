#include "main.h"

/**
 * _isalpha - returns 1 if char is a letter
 * @c: the passed int that is checked
 *
 * Return: 1 if letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
